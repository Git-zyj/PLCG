/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128726
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 *= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)25678))));
    var_17 = var_3;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)0))));
                var_18 = ((/* implicit */unsigned short) 0ULL);
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50447)) || (((/* implicit */_Bool) 18446744073709551615ULL))))), (((((/* implicit */_Bool) var_0)) ? (14711917493230379028ULL) : (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_2])) + (arr_7 [i_2])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)19))))) - (((((/* implicit */_Bool) (unsigned short)0)) ? (var_0) : (((/* implicit */unsigned long long int) var_14)))))) : (min((((/* implicit */unsigned long long int) arr_4 [i_2] [(_Bool)1])), (min((var_2), (((/* implicit */unsigned long long int) arr_8 [i_2])))))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */int) (_Bool)1);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (short)(-32767 - 1)))));
        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_3] [i_3])) & (((/* implicit */int) var_5))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((unsigned char) (~(4623784946340130667ULL))));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) (+(-770629801)))))))));
                    arr_21 [i_4] [i_4] [i_6] = ((/* implicit */signed char) (unsigned char)83);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                {
                    arr_30 [i_4] [i_7] [i_8] = ((/* implicit */int) ((long long int) ((((/* implicit */int) arr_15 [i_7 - 1] [i_7 - 1] [i_7])) + (((/* implicit */int) var_5)))));
                    arr_31 [i_4] [(unsigned char)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((var_10) ? (((/* implicit */int) (unsigned short)36226)) : (((/* implicit */int) (unsigned short)39856)))), (((/* implicit */int) arr_26 [i_7 - 1] [i_7 - 1] [i_4]))))) ? (((max((-5837057065710030261LL), (((/* implicit */long long int) var_14)))) * (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)15089))))))) : (((/* implicit */long long int) ((unsigned int) (unsigned char)255)))));
                }
            } 
        } 
        var_25 -= ((unsigned long long int) max((min((13822959127369420949ULL), (((/* implicit */unsigned long long int) (signed char)-109)))), (((/* implicit */unsigned long long int) var_14))));
    }
}
