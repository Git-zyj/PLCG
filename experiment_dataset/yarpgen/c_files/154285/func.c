/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154285
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((max((((/* implicit */int) arr_0 [(short)12])), (((((/* implicit */int) (unsigned short)15)) << (((((((/* implicit */int) (short)-28058)) + (28087))) - (7))))))), (((/* implicit */int) (unsigned short)8039)))))));
        arr_2 [(short)8] &= ((/* implicit */short) ((min((((/* implicit */int) max((arr_1 [14ULL]), (arr_1 [(signed char)16])))), (((((/* implicit */int) var_11)) & (((/* implicit */int) (signed char)(-127 - 1))))))) % (((/* implicit */int) var_7))));
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((((/* implicit */_Bool) -2722483276786072695LL)) || (((/* implicit */_Bool) arr_0 [i_0])))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) min(((signed char)100), ((signed char)-64))))) < (((((((/* implicit */int) var_10)) + (2147483647))) << (((((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_1))) - (30U)))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 3; i_3 < 19; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((unsigned char) var_13));
                        arr_16 [i_1] [i_2] [i_2] [i_4] [i_4 + 1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_10 [i_3 - 3] [i_4 - 1] [(unsigned short)20] [i_4])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 - 1] [i_4 + 1] [i_4] [i_4]))))), (((unsigned int) min((arr_11 [i_2] [i_3]), (((/* implicit */unsigned int) (unsigned char)153)))))));
                    }
                } 
            } 
            arr_17 [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1211210231))));
        }
        var_21 = ((/* implicit */signed char) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)120)), ((short)14294)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_17))))));
    }
    var_22 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) ((var_12) - (((/* implicit */long long int) ((/* implicit */int) var_4)))))) && (((/* implicit */_Bool) ((var_15) >> (((-8528648051085440203LL) + (8528648051085440208LL))))))))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)12937)) ? (2792125855U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163)))));
    var_24 &= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)34)) && ((!(((/* implicit */_Bool) var_15)))))));
}
