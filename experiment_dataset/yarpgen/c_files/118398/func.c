/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118398
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
    var_18 = ((/* implicit */unsigned long long int) max((((short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_14))))), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (var_7)))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_12))))))))));
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)20604)) ? (4945464498287903039LL) : (-5563755101172546187LL))) - (((/* implicit */long long int) 4U)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((max((8319660275417611375LL), (4945464498287903039LL))) % (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_0 - 1]))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1028692628517440279LL)) ? (-8546057068482650555LL) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0])) == (((/* implicit */int) arr_6 [i_0] [i_3]))))))))));
                            var_22 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_9 [i_3] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_3]))) : (144201455388664861ULL))) - (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_15)), (arr_0 [i_0])))))) * (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1] [i_2 - 1])))) ? (((/* implicit */unsigned int) ((arr_5 [i_0 - 1] [i_0] [i_2 + 2] [i_3]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-2347))))) : (var_15))))));
                            arr_11 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-2367)) / (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0] [i_0 - 1])) ? (arr_7 [i_0] [i_0] [i_2 - 2] [i_3]) : (((/* implicit */int) (short)-28809))))))), (((((/* implicit */_Bool) 33554431)) ? (3957251595U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7607)))))));
                            arr_12 [i_0] [i_1] [17U] = ((/* implicit */unsigned int) (((+((-(((/* implicit */int) (short)-2342)))))) >> (((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31737)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)44382))))) ? (((((/* implicit */_Bool) var_13)) ? (-4945464498287903039LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) 799228538)) : (-1462040783457068409LL))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0]))) : (3995627073U))) & (((/* implicit */unsigned int) (+(((/* implicit */int) var_16))))))))));
                /* LoopSeq 1 */
                for (long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                {
                    var_24 = ((/* implicit */int) ((unsigned int) ((((/* implicit */long long int) (-(var_0)))) > (((((/* implicit */_Bool) 6321733637395126129ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_0]))) : (-8319660275417611375LL))))));
                    var_25 = ((/* implicit */short) ((unsigned int) -33554424));
                }
            }
        } 
    } 
}
