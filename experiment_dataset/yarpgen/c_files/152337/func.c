/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152337
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
    var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */signed char) 5091236789811540903ULL);
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 13355507283898010717ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((5091236789811540903ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (13355507283898010686ULL)));
                            var_16 = ((/* implicit */short) (+(13355507283898010713ULL)));
                        }
                        for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
                        {
                            var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_5 + 1] [10U] [i_2] [i_0] [i_3])) ? (-9007199254740992LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5 - 1] [i_5 + 2] [i_5 + 3] [i_5] [i_5 + 2])))));
                            arr_17 [i_1] [i_1] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_5 + 4] [i_5 + 1] [i_5 + 1] [i_5 + 4]))));
                        }
                        for (unsigned int i_6 = 3; i_6 < 24; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) var_11);
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_13 [i_6 - 3] [(unsigned char)12] [i_6 - 3] [(unsigned char)12] [i_6] [i_6 - 2] [i_6 - 2]))));
                        }
                        var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_6)))))));
                    }
                    for (short i_7 = 2; i_7 < 24; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 5091236789811540875ULL)) ? (((/* implicit */int) (unsigned short)968)) : (((((/* implicit */int) (short)31039)) + (((/* implicit */int) arr_11 [i_0] [i_0] [(signed char)13])))))) != (((((/* implicit */_Bool) (unsigned short)34588)) ? (1810255715) : (((/* implicit */int) (short)32751))))));
                        var_22 = ((/* implicit */unsigned char) (short)-16384);
                        var_23 = ((/* implicit */unsigned char) arr_4 [(unsigned char)5] [i_0] [i_0]);
                        var_24 = ((/* implicit */short) (-(arr_18 [i_2] [i_1] [i_7 - 2] [i_7])));
                        var_25 = ((/* implicit */unsigned long long int) 721003696025971783LL);
                    }
                    arr_23 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (((+(((/* implicit */int) var_6)))) >= (((/* implicit */int) arr_14 [i_0])))))));
                    var_26 = ((/* implicit */short) ((unsigned char) arr_13 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] [i_1]));
                    var_27 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_22 [2LL] [(unsigned short)7])))) ? (5205675607128173848ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) (unsigned short)32704)) : (((/* implicit */int) (short)31039)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 1; i_8 < 9; i_8 += 4) 
    {
        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            {
                arr_30 [5ULL] [(short)1] [i_9] = ((/* implicit */unsigned long long int) arr_26 [i_8 + 2]);
                var_28 = ((/* implicit */unsigned short) (+(max(((+(arr_18 [6U] [2] [(short)18] [2]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)154)))))))));
            }
        } 
    } 
}
