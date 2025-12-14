/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167838
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
    for (signed char i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [(unsigned short)0] = ((/* implicit */signed char) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1346869752U)) && (((/* implicit */_Bool) (~(var_6))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    arr_8 [i_2] = ((/* implicit */unsigned short) var_12);
                    arr_9 [i_2] [i_2] [i_2] [(unsigned short)3] = (((!(((/* implicit */_Bool) -637608283)))) ? (((/* implicit */int) ((((/* implicit */long long int) max((-637608283), (((/* implicit */int) (unsigned short)15719))))) != (min((((/* implicit */long long int) var_3)), (var_6)))))) : (((/* implicit */int) ((signed char) var_5))));
                    var_21 = ((/* implicit */long long int) (((!((!(((/* implicit */_Bool) var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2 + 2]))))) : (((((/* implicit */int) arr_1 [i_1] [i_1])) & (var_17)))));
                    var_22 = ((/* implicit */unsigned char) (-((((-(((/* implicit */int) var_5)))) % ((~(((/* implicit */int) (short)(-32767 - 1)))))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) -637608283)) ? (((/* implicit */unsigned int) var_1)) : (var_9))))));
                    var_24 = ((((/* implicit */_Bool) var_17)) ? ((+(arr_0 [i_3]))) : (((/* implicit */int) (short)(-32767 - 1))));
                    arr_12 [i_0] [i_1] [2ULL] [i_0] = (signed char)-1;
                }
                /* vectorizable */
                for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -637608283))));
                        arr_18 [4U] [(unsigned short)4] [i_4] [i_5 + 1] = ((/* implicit */unsigned int) var_2);
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            arr_22 [(short)10] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)47193))));
                            arr_23 [i_0] [i_0 - 4] [i_0] [i_0] [5LL] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32743)) ? (arr_17 [i_0] [i_1] [(unsigned char)4] [i_5] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                            arr_24 [i_0 + 2] [(short)8] [i_4] [i_0 + 2] [(signed char)10] = ((/* implicit */long long int) var_16);
                            var_26 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-25883)))))));
                            var_27 -= ((/* implicit */unsigned char) (-(var_6)));
                        }
                        arr_25 [i_0 - 1] [i_1] [i_0 - 1] [i_5 - 1] = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_13 [i_0 - 3] [i_1] [i_4]))))));
                    }
                    for (int i_7 = 2; i_7 < 11; i_7 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned short) arr_3 [i_0 + 1]);
                        arr_30 [i_0] [i_1] [3U] [i_7] = (~(((/* implicit */int) var_0)));
                        var_29 = ((/* implicit */signed char) (~(391287713U)));
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) 11440915116428684036ULL))));
                    }
                    var_31 -= ((/* implicit */unsigned short) (short)5239);
                }
            }
        } 
    } 
    var_32 &= ((/* implicit */short) (!((!(((/* implicit */_Bool) (~(815509875U))))))));
    var_33 = ((/* implicit */short) (signed char)4);
}
