/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182060
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
    var_20 += ((/* implicit */int) var_15);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) == ((+(((/* implicit */int) (signed char)77)))))))) < (((((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) / (var_12))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_22 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_18))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (-1596986587) : (((/* implicit */int) var_16)))))))));
                    arr_8 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_13)), (var_18)))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-40)) ? (max((-1596986587), (((/* implicit */int) (short)-32754)))) : (((((/* implicit */_Bool) 11537929729739307410ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)17173)))))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 8; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            {
                arr_16 [i_3] [i_4] |= min((arr_0 [i_4] [i_3]), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)76)) <= (((/* implicit */int) arr_12 [i_4]))))) > (((/* implicit */int) (unsigned char)102))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    var_24 = ((/* implicit */unsigned int) ((signed char) arr_13 [i_5] [i_3 + 2] [i_3]));
                    arr_20 [i_5] [i_3 + 1] = ((((/* implicit */_Bool) arr_15 [i_3 - 1] [i_3 + 1])) || (((/* implicit */_Bool) arr_15 [i_3 - 1] [i_3 + 1])));
                }
                for (unsigned char i_6 = 2; i_6 < 10; i_6 += 3) 
                {
                    arr_24 [i_3] [i_4] [i_4] [i_6] = ((/* implicit */short) (_Bool)1);
                    var_25 = ((/* implicit */long long int) var_19);
                }
            }
        } 
    } 
}
