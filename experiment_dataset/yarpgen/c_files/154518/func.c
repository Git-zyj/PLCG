/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154518
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)25075)) != (arr_4 [i_0 + 3]))))) <= (((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (4986109515701698323LL) : (((/* implicit */long long int) arr_4 [i_0 + 3])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    var_19 = (((_Bool)0) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_2 + 1])) : (((/* implicit */int) (unsigned short)40461)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0 - 1] [i_0] [12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [(_Bool)1] [i_1] [i_1] [(signed char)6])))))));
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((signed char) arr_7 [i_3] [i_3])))));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */short) arr_7 [i_2] [i_2]);
                }
                for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((arr_16 [i_6 + 1] [i_6 + 1]) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)14358)) ? (((/* implicit */int) (_Bool)0)) : (-1))) << (((max((((/* implicit */int) (signed char)85)), (2043489481))) - (2043489459)))))) : (-2979282379218264417LL)));
                                var_23 ^= max((var_14), (((/* implicit */long long int) var_15)));
                                arr_25 [i_0] [i_0] = ((int) min((((/* implicit */long long int) arr_7 [i_0] [i_0])), (4986109515701698323LL)));
                                arr_26 [i_0] [i_1] [i_5] [i_6] [i_0] = ((unsigned short) ((short) -214558076075179381LL));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */long long int) 2043489481)) != (-2979282379218264417LL))))));
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [(signed char)14] [i_0])) ? (((((/* implicit */_Bool) min(((signed char)28), (((/* implicit */signed char) arr_9 [(_Bool)1] [i_1] [i_5]))))) ? (arr_4 [i_0 - 2]) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_1])) > (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_16 [i_0 + 1] [15LL])) : (((/* implicit */int) ((unsigned short) arr_4 [i_1])))))));
                    var_26 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (-2043489481)))) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) ((unsigned short) -8394844764378955273LL)))))));
                }
                var_27 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)14358))))), (max((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (short)15872))))), (max((((/* implicit */int) (signed char)20)), (arr_4 [15LL])))))));
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) max((((/* implicit */long long int) (short)0)), (max((((/* implicit */long long int) var_3)), (3076607357893873324LL))))))));
}
