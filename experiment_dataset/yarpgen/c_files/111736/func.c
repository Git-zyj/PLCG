/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111736
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
    var_17 &= ((/* implicit */signed char) var_10);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)32)), ((unsigned char)16))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (arr_0 [i_0]))))) * (max((((/* implicit */unsigned int) (unsigned char)240)), (3508713714U)))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */short) (~((+(((/* implicit */int) (unsigned char)16))))));
                        arr_12 [i_0] [i_1] [i_0] [i_3] = (+(((/* implicit */int) (unsigned char)5)));
                    }
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        var_21 = ((int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        arr_16 [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */short) (signed char)-1)), (arr_2 [i_1])))), (max((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(short)5] [i_4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) var_11))))))));
                    }
                    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((short) (unsigned short)64758));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        /* LoopSeq 1 */
                        for (short i_6 = 2; i_6 < 19; i_6 += 2) 
                        {
                            arr_25 [2] [8ULL] [2] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) var_16);
                            arr_26 [i_0] [i_0] [2] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) var_16)))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [(signed char)5] [i_6])))), (((/* implicit */int) var_2))));
                            var_23 = ((/* implicit */int) ((243794962) <= (((/* implicit */int) (short)-10630))));
                        }
                    }
                    arr_27 [i_2] = ((/* implicit */unsigned long long int) (unsigned char)240);
                }
            } 
        } 
        arr_28 [i_0] [i_0] = ((/* implicit */int) var_2);
    }
    /* LoopNest 2 */
    for (unsigned short i_7 = 1; i_7 < 15; i_7 += 3) 
    {
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            {
                var_24 = ((/* implicit */unsigned short) -243794967);
                arr_34 [i_7 + 1] [i_7] [i_7] = ((/* implicit */unsigned char) (signed char)-88);
            }
        } 
    } 
}
