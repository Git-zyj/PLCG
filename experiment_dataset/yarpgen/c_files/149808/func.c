/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149808
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) (((!(((/* implicit */_Bool) -2675359335060431438LL)))) || (((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_12)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_0 [i_1]))))))));
                var_15 = ((/* implicit */_Bool) ((((max((((/* implicit */int) arr_4 [i_0] [12U])), (arr_3 [10]))) | ((~(arr_3 [i_1 - 2]))))) & (((/* implicit */int) min(((_Bool)1), (max(((_Bool)1), ((_Bool)1))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)0)));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_7 [i_0 + 3] [i_0 + 4] [i_0 + 2] [i_1 - 3])))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            var_18 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_1])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)0)) : (var_5))) : (((((/* implicit */int) (unsigned char)188)) | (((/* implicit */int) (_Bool)0))))))));
                            var_19 = ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_11 [i_4] [(signed char)3] [i_2] [i_1 - 2] [i_0 + 1])))) ^ (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_3])));
                        }
                        for (signed char i_5 = 1; i_5 < 15; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) -789941840))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0 + 1] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_0]))))))))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)4094)))))));
                            var_22 = ((/* implicit */signed char) (unsigned char)148);
                        }
                    }
                    var_23 ^= ((/* implicit */long long int) (-(3566531200U)));
                    var_24 |= ((/* implicit */signed char) -1996973602);
                    var_25 = ((/* implicit */unsigned int) 1802118370704073594ULL);
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_6 = 2; i_6 < 11; i_6 += 2) 
    {
        var_26 = 1996973587;
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (-(((((/* implicit */_Bool) ((unsigned int) arr_9 [i_6] [i_6] [(unsigned short)0] [i_6] [i_6] [i_6]))) ? (arr_1 [i_6 + 3]) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_16 [i_6])) : (0LL))))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_5))) || (((/* implicit */_Bool) max((arr_17 [i_7] [i_7]), (((/* implicit */unsigned long long int) arr_18 [i_7] [i_7])))))));
        var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_18 [i_7] [i_7]), (arr_18 [i_7] [i_7]))))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 22; i_8 += 2) 
        {
            for (long long int i_9 = 3; i_9 < 21; i_9 += 1) 
            {
                {
                    var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_8 - 1] [i_9 - 1]))));
                    var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) (~((~(2198833128U))))))));
                }
            } 
        } 
    }
}
