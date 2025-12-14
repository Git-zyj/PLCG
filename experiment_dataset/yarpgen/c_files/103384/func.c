/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103384
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
    var_10 = ((/* implicit */_Bool) (-(min((((((((/* implicit */int) var_6)) + (2147483647))) >> (((((/* implicit */int) var_0)) - (20104))))), (((/* implicit */int) (!(var_8))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = (-(((/* implicit */int) ((((/* implicit */int) (signed char)0)) < (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) (unsigned char)161)))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) (~(((((long long int) (unsigned short)39509)) ^ (((/* implicit */long long int) arr_5 [i_0]))))));
                    var_12 = ((/* implicit */unsigned int) arr_4 [i_0] [(unsigned short)5] [(unsigned short)5]);
                    arr_9 [i_0] [i_0] [i_0] [(short)0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (1789609182U)))) ? (min((arr_5 [i_1]), (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)39509)))))));
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max((((((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) / (((/* implicit */int) arr_7 [i_0] [0U] [i_1] [i_2])))), (((/* implicit */int) ((((/* implicit */long long int) 4294967295U)) <= (((long long int) (_Bool)1))))))))));
                    var_14 = ((/* implicit */_Bool) 2505358114U);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */short) (!((((-(arr_5 [i_0]))) >= (arr_8 [i_0])))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        arr_14 [(signed char)9] = ((/* implicit */long long int) arr_0 [i_3]);
        arr_15 [(unsigned short)6] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [(unsigned short)16]))))) + (((0U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_3] [i_3])))))));
    }
    for (signed char i_4 = 3; i_4 < 21; i_4 += 1) 
    {
        arr_20 [18] &= ((/* implicit */signed char) var_1);
        /* LoopNest 2 */
        for (long long int i_5 = 2; i_5 < 22; i_5 += 2) 
        {
            for (long long int i_6 = 1; i_6 < 20; i_6 += 3) 
            {
                {
                    arr_26 [i_4] [(unsigned short)1] [(_Bool)1] = ((/* implicit */unsigned short) ((1089216109) / (((/* implicit */int) var_3))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4] [i_5] [i_5]))) : (arr_19 [i_4] [i_4])));
                }
            } 
        } 
        arr_27 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_3)))) >= (min((((/* implicit */int) (_Bool)1)), (-1089216109))))))) : (arr_19 [i_4] [i_4])));
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_7] [14])) ^ (((/* implicit */int) arr_24 [20] [i_7] [i_4 - 3]))))))))) <= (min((((/* implicit */unsigned int) var_0)), (((var_8) ? (3183463110U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [(short)6] [i_8])))))))))));
                    arr_32 [i_4] [i_4] = ((/* implicit */unsigned short) arr_28 [i_4] [i_8]);
                    arr_33 [i_4] [(_Bool)1] [i_4] = ((/* implicit */long long int) max(((((-(((/* implicit */int) (unsigned short)39509)))) + (((/* implicit */int) (unsigned short)65440)))), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) && (((/* implicit */_Bool) min((arr_22 [i_4] [i_4]), (((/* implicit */unsigned short) (_Bool)1))))))))));
                    arr_34 [i_4] [i_8] = var_3;
                }
            } 
        } 
    }
}
