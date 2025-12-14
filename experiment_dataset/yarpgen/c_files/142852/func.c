/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142852
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned int) ((unsigned short) (unsigned char)181));
                            arr_13 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) max(((~((~(((/* implicit */int) arr_5 [i_3])))))), (((/* implicit */int) var_4))));
                            arr_14 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */int) ((((((/* implicit */int) var_6)) < (((/* implicit */int) arr_5 [i_0])))) || ((!(((/* implicit */_Bool) arr_5 [i_3]))))));
                            var_12 = ((/* implicit */signed char) 3143431304U);
                            arr_15 [i_1] [i_2] = ((unsigned char) min((3143431300U), (((unsigned int) var_8))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */_Bool) ((unsigned char) var_0));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_23 [i_0] [(signed char)5] [i_4] [(_Bool)1] [i_6] = ((/* implicit */unsigned short) (signed char)62);
                                var_14 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [17])) - (var_3)));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_1] [(_Bool)1] [i_0] [i_6])) + (((/* implicit */int) arr_16 [i_0] [i_1] [i_0]))));
                            }
                        } 
                    } 
                    var_16 *= ((/* implicit */unsigned char) ((signed char) var_5));
                }
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    var_17 -= ((/* implicit */unsigned short) var_3);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) min((var_18), ((-(((/* implicit */int) var_0))))));
                                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_29 [i_0] [(unsigned short)1] [i_7] [i_8] [(unsigned short)1]))));
                                var_20 = var_7;
                                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)68))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (unsigned short)0))) | (((/* implicit */int) var_7))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((var_9) / (((((/* implicit */_Bool) 3143431281U)) ? (((/* implicit */int) var_7)) : ((-2147483647 - 1))))))) | (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4294967282U))), (((/* implicit */unsigned int) var_2))))));
    var_24 = max((((/* implicit */int) ((var_3) != (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_10)))))))), (var_3));
}
