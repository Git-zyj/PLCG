/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137620
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (((+(max((((/* implicit */unsigned long long int) (unsigned short)65533)), (var_5))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) < (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */unsigned long long int) 1257707313U)) : (18446744073709551615ULL))))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)142), (((/* implicit */unsigned char) (signed char)125)))))) ^ (max((var_8), (((/* implicit */unsigned long long int) max((var_4), (var_4))))))));
                arr_4 [i_0] [(signed char)19] [(unsigned char)19] = ((/* implicit */signed char) (~(((/* implicit */int) max((var_0), (arr_1 [i_0 + 1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)48705)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))) : (((long long int) ((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) var_4)))))));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 1; i_3 < 15; i_3 += 1) /* same iter space */
        {
            var_14 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(-5674400698072285410LL))))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_3 + 3]))));
                            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_15 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 2] [i_3 + 2]))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (((~(8126464LL))) == (-5674400698072285385LL))))) / (-1721970579514656072LL)));
                            var_18 ^= ((/* implicit */unsigned int) (~(((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)24))))));
                            var_19 = ((/* implicit */long long int) arr_12 [0] [(unsigned char)3] [i_4] [(signed char)10] [(signed char)10]);
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)125))) > (5822989487679880681LL)))), (((short) arr_10 [i_2] [i_3] [i_3 + 1] [i_3]))));
            var_21 += ((/* implicit */int) (unsigned char)235);
        }
        for (unsigned char i_7 = 1; i_7 < 15; i_7 += 1) /* same iter space */
        {
            arr_21 [i_2] [i_2] [(unsigned char)10] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_2] [(unsigned char)11])), (1ULL)))) ? (((/* implicit */int) (unsigned char)231)) : (((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */int) arr_13 [i_2] [4LL] [i_7] [i_2])) : (((/* implicit */int) arr_8 [i_2] [i_7]))))))));
            arr_22 [i_7] [i_2] = var_4;
        }
        arr_23 [i_2] = ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) arr_5 [i_2])) & (8126485LL))));
    }
    var_22 = ((/* implicit */int) ((signed char) ((unsigned short) (signed char)-125)));
}
