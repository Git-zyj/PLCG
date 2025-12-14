/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143225
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
    var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((int) var_16))))) ? (var_10) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14)))))));
    var_19 &= ((/* implicit */signed char) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    arr_6 [i_0] [i_2] [4U] = ((/* implicit */short) ((((/* implicit */int) max((arr_0 [i_0] [(signed char)7]), (arr_0 [i_1] [i_2])))) > (((((/* implicit */_Bool) var_7)) ? ((-2147483647 - 1)) : (var_0)))));
                    var_20 = ((/* implicit */unsigned int) var_9);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) 7031941627663799163ULL);
                        var_22 = min((((/* implicit */long long int) var_7)), ((-(max((((/* implicit */long long int) var_11)), (9223372036854775806LL))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            var_23 -= ((/* implicit */unsigned char) (((+(7599688104266918426ULL))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) (short)-8203))))))));
                            arr_14 [i_2] [i_2] [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) 7599688104266918445ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-8203)));
                        }
                    }
                    for (short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                    {
                        var_24 += ((/* implicit */unsigned char) (-(min((-10), (((/* implicit */int) (signed char)-20))))));
                        var_25 = ((/* implicit */signed char) (short)-8203);
                        arr_18 [i_0] [i_0] [0LL] [i_2] = ((/* implicit */unsigned char) var_17);
                        arr_19 [i_0] [i_0] [i_2] [i_5] [7LL] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_1)) ? (arr_13 [(_Bool)1] [i_1] [i_2 - 3] [i_5] [i_2]) : (var_8))), (((/* implicit */long long int) arr_11 [i_2 + 3] [i_2] [i_2] [0ULL] [i_2]))));
                        arr_20 [i_2] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1544)) ? (((/* implicit */int) min((arr_2 [i_2 + 2] [i_0]), (var_3)))) : (((/* implicit */int) (unsigned short)41584)))))));
                    }
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 10847055969442633196ULL))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1538))))))))));
                                var_28 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 365979558))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned short) (+(8199801488956489383LL)));
                }
                var_30 = ((/* implicit */unsigned int) 10316936837266901245ULL);
                arr_30 [i_0] [i_1] = var_10;
            }
        } 
    } 
}
