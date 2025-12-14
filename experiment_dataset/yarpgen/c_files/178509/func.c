/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178509
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_10)), (-7LL)))))) ? ((((!(((/* implicit */_Bool) 1170350322U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_13)))) : (((((/* implicit */_Bool) -4548202809032823500LL)) ? (1705501829U) : (((/* implicit */unsigned int) 813915280)))))) : (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)174)), (-1444888393)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) arr_1 [i_0 + 1])))) == ((+(((/* implicit */int) var_1))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_2 [i_0]))))) ? (1111155966) : (((((/* implicit */_Bool) 1660213966U)) ? (-1085552432) : (((/* implicit */int) (unsigned char)171)))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_19 *= ((/* implicit */signed char) (-(2157178518U)));
                    arr_9 [i_0] [i_2 + 1] [i_1] [i_0] = (~(arr_5 [i_0 - 1] [i_1]));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned short) (+(262142U)));
    }
    var_20 = var_12;
    var_21 = min((((/* implicit */unsigned short) var_8)), (((unsigned short) var_13)));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                var_22 &= ((/* implicit */unsigned int) (unsigned char)149);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    for (unsigned int i_6 = 2; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) var_6);
                            arr_22 [i_6] [i_4 - 1] [i_6] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_19 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                            arr_23 [i_3] [i_4 - 1] [i_6] [i_6] = ((((/* implicit */_Bool) 3124616998U)) ? (((/* implicit */unsigned int) -1444888393)) : (0U));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) arr_15 [i_3] [i_4] [i_3]);
            }
        } 
    } 
}
