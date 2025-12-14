/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139117
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_1] [(signed char)20] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0 - 2]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0] [i_0 + 1])))) : (((/* implicit */int) arr_2 [i_0] [i_0 - 1]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned char) arr_4 [(_Bool)1] [i_1] [i_2] [i_0]);
                            arr_12 [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */signed char) (_Bool)1);
                            var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)240)) >> (((3196404606U) - (3196404602U)))))))) ? ((-(((/* implicit */int) arr_2 [i_4] [i_0 - 1])))) : (((/* implicit */int) ((signed char) min((var_4), (((/* implicit */long long int) var_11))))))));
                            arr_13 [i_0] [i_0] [(signed char)13] [i_0] [i_0] [8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_2 + 4] [i_3])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_11 [i_0] [i_2 + 1] [i_2 + 1]))))) ? ((+(((((/* implicit */_Bool) 12355995535870483751ULL)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
                        }
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 2] [i_0])) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)55675)) != (((/* implicit */int) (_Bool)1))))), ((+(((/* implicit */int) var_3))))))) : ((-(min((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0] [i_0])), (arr_8 [i_0])))))));
        arr_15 [i_0] = ((/* implicit */long long int) (!(((((((/* implicit */_Bool) arr_11 [i_0] [(_Bool)1] [i_0])) || (((/* implicit */_Bool) var_14)))) && (((/* implicit */_Bool) ((signed char) (signed char)35)))))));
    }
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */long long int) 1098562667U)), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-44), (((/* implicit */signed char) arr_2 [(unsigned short)14] [(unsigned short)14]))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_13))))) : (var_8)))) : (max((arr_0 [(signed char)20]), (arr_0 [4LL])))));
        arr_18 [(signed char)2] [(signed char)9] = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) var_10)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + ((+(2264900335874811923ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_5] [i_5] [i_5] [(unsigned short)16])))))));
        var_23 ^= ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) arr_10 [20ULL] [i_5] [i_5] [i_5] [20ULL] [(unsigned short)4])))));
    }
    var_24 = ((/* implicit */_Bool) var_16);
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_12) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */long long int) (-(((/* implicit */int) var_17)))))))) || (((/* implicit */_Bool) var_15))));
}
