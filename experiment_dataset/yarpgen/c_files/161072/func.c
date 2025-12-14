/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161072
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
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 += max((((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [14LL] [i_1 - 3]))))), (((short) ((-2019827301) >= (-2019827297)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 3; i_4 < 19; i_4 += 2) 
                            {
                                var_20 &= ((/* implicit */unsigned char) (~(1121822219)));
                                arr_15 [i_2] [18ULL] [i_0] [i_2] [i_0] [(unsigned short)6] [i_0] = ((/* implicit */signed char) ((unsigned short) ((((var_11) % (var_0))) / (((/* implicit */int) var_7)))));
                                arr_16 [i_0 - 3] [i_0] [i_2] [i_0 - 3] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((((/* implicit */int) var_9)), (var_3))))))));
                            }
                            /* LoopSeq 1 */
                            for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned long long int) arr_8 [i_0]);
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (9007199254740480ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_5] [i_3] [i_2] [i_1] [i_1] [(unsigned short)13] [2LL]))))))), (((/* implicit */unsigned long long int) var_18)))))));
                                var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_12)))) ? (max((((int) var_4)), ((+(var_0))))) : (var_12)));
                            }
                            arr_21 [i_0] [i_1] [i_0] [i_3] [i_3 + 2] [7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((arr_7 [i_0 + 4] [i_1 - 3] [(unsigned char)4] [i_0]) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3])) : (2019827288))))))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2019827300)) ? (((/* implicit */int) (short)2162)) : (-2019827304))))));
                        }
                    } 
                } 
                arr_22 [i_0] [i_0] = ((/* implicit */unsigned long long int) -2019827297);
            }
        } 
    } 
    var_25 |= ((/* implicit */short) min(((unsigned char)156), ((unsigned char)149)));
}
