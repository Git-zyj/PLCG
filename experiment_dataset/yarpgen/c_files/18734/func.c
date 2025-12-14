/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18734
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) arr_7 [i_0] [i_2] [2]))));
                            var_17 = ((/* implicit */int) min((var_17), (((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (unsigned short)0))))));
                        }
                    } 
                } 
                var_18 *= ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) arr_2 [(unsigned short)4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (int i_6 = 3; i_6 < 23; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 22; i_7 += 4) 
                    {
                        for (short i_8 = 1; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned long long int) (-(var_14)));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_21 [i_7 + 1] [i_6 + 1] [i_8 + 1] [i_8 + 1] [(signed char)8])) >= (((/* implicit */int) arr_21 [i_7 - 1] [i_6 - 3] [i_8 + 2] [i_8 + 2] [(unsigned short)10]))))) / (((/* implicit */int) max((arr_21 [i_7 - 1] [i_6 - 2] [i_8 - 1] [i_8 - 1] [(signed char)10]), (arr_21 [i_7 - 1] [i_6 - 3] [i_8 - 1] [(_Bool)0] [(unsigned char)8]))))));
                            }
                        } 
                    } 
                    arr_26 [i_6] [i_5] [(signed char)7] [i_6] = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) var_6)), (arr_22 [i_6] [i_6] [i_6] [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_6 + 2]))), ((+(arr_22 [i_6] [i_6] [(signed char)2] [i_6 - 2] [i_6 - 2] [i_6] [i_6 + 2])))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        arr_30 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) * (max((arr_24 [i_4] [i_6] [i_6] [(signed char)5]), (arr_24 [i_4] [i_6] [i_6 + 2] [i_9])))));
                        var_21 = ((/* implicit */signed char) (+(((((/* implicit */int) var_4)) / (((/* implicit */int) (signed char)22))))));
                        arr_31 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)81)) & (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [i_6 + 2] [i_6 - 3]))) < (arr_24 [(_Bool)1] [i_6] [i_6 - 3] [i_6 - 3]))))));
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_34 [i_6] [i_6] [i_6] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_29 [i_6] [i_6] [i_6 + 1] [i_6]), ((unsigned short)46527)))) ? (((int) (signed char)(-127 - 1))) : (((/* implicit */int) (!(arr_27 [i_4] [i_6] [i_5] [(signed char)21] [i_4] [i_4]))))))), (((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (max(((+(94087240U))), ((+(var_13)))))));
                        arr_35 [i_6] [14] [i_6] [14] = ((/* implicit */unsigned long long int) arr_14 [6ULL]);
                        arr_36 [10] [(_Bool)1] [i_6] [i_6] [23] [i_4] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)84)), ((~(-517359547)))));
                        arr_37 [i_6] [(short)1] [(_Bool)1] [i_10] = ((/* implicit */signed char) min(((unsigned short)46527), (((/* implicit */unsigned short) (_Bool)1))));
                    }
                }
            } 
        } 
    } 
    var_23 = ((_Bool) var_15);
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((unsigned int) 2080374784ULL)) > (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) - (((/* implicit */int) var_7)))))))) / (((/* implicit */int) ((unsigned short) ((signed char) var_1))))));
}
