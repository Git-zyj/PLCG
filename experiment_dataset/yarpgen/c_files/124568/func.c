/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124568
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) (~(9147464692643933092ULL)));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)22))));
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_10 [i_0 - 1] [i_1] [i_2] [18ULL] &= ((((3816386158509826384ULL) | (3816386158509826384ULL))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1]))))));
                        arr_11 [i_0] [(signed char)7] = arr_0 [i_0];
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)62))))) : (((/* implicit */int) ((signed char) arr_5 [i_1 + 1])))));
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(signed char)0] [i_0])) ? (arr_2 [i_0] [i_0] [(signed char)10]) : (9147464692643933092ULL)))) ? (((((/* implicit */int) arr_7 [i_0])) << (((4363043149270264818ULL) - (4363043149270264817ULL))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (signed char)-66))))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */_Bool) 1603526668316325779ULL)) ? (var_11) : (((((/* implicit */_Bool) arr_0 [(signed char)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 1] [(signed char)18] [14ULL]))) : (14106526503574748186ULL)))))));
    }
    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (((17554913061229701211ULL) ^ (17412856228441251699ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), ((signed char)-56))))) : (var_3));
}
