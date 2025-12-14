/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130007
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_2 - 4] = ((/* implicit */unsigned short) 1597083718);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_4] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) -1597083718)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned char) arr_4 [i_2 - 3] [i_1] [i_1 - 1])))));
                                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)159)) - (((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1])))))) : (((((/* implicit */_Bool) 1597083718)) ? (((/* implicit */int) var_8)) : (1597083718)))));
                            }
                        } 
                    } 
                    arr_15 [i_1] = ((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_0] [i_1] [i_0]);
                    arr_16 [i_1] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) arr_1 [i_0])))), ((!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) (unsigned char)108)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))), ((~(((/* implicit */int) var_1))))));
    var_21 = ((/* implicit */int) var_14);
    var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) ((unsigned char) var_17))) <= (((((/* implicit */_Bool) (unsigned char)131)) ? (-1597083719) : (((/* implicit */int) var_8)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_17)) << (((790104407) - (790104388))))))))) : ((+(((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) (unsigned char)108)) : (1597083720)))))));
    var_23 = (signed char)36;
}
