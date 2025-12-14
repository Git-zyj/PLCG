/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117525
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)28064))))) ? (((/* implicit */int) ((signed char) (short)28064))) : (((/* implicit */int) (_Bool)1))))) ? (max((((arr_5 [i_3] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_4 [i_0]))), (max((var_10), (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) min((875024559U), (((/* implicit */unsigned int) var_5)))))));
                        var_19 = min((((((/* implicit */_Bool) (short)28058)) ? (var_12) : (arr_3 [i_1] [i_3]))), (((/* implicit */unsigned int) ((signed char) var_12))));
                        arr_9 [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 79365557U)))))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_2] [i_3] [i_4] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((short)-28052), (((/* implicit */short) arr_11 [i_1] [i_1] [i_1 - 3] [i_3])))))));
                            var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_6)) & (((/* implicit */int) var_9))))));
                        }
                        for (short i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) 4606188099330113222ULL);
                            var_21 = ((/* implicit */unsigned char) 875024534U);
                        }
                        for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            var_22 = var_12;
                            arr_20 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((-1854372011718885415LL) > (6788551919684166750LL)));
                            arr_21 [i_0] [i_0] [i_2] [i_3] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15)))), (((/* implicit */int) (!(((/* implicit */_Bool) 875024586U)))))))) ? (((((/* implicit */_Bool) max((4ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((int) arr_3 [i_0] [i_1 - 3]))))) : (max(((~(3419942736U))), (((/* implicit */unsigned int) (short)-16384))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_7] [i_1 + 1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [6] [i_7])) ? (875024559U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) | (arr_2 [i_1 + 1])));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((long long int) var_2))));
                            arr_28 [i_0] [i_7] [(_Bool)1] [i_1] [i_1] [i_7] [i_0] = ((/* implicit */int) 4606188099330113222ULL);
                        }
                        arr_29 [i_7] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                    }
                    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 6788551919684166750LL))));
                    var_25 = ((/* implicit */int) (~(((((/* implicit */_Bool) (+(359246110U)))) ? (arr_7 [i_0] [i_1] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) var_6);
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned short) var_12))) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)18035))))) | (var_17)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 6788551919684166763LL)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) : (max((((/* implicit */long long int) var_16)), (9223372036854775807LL)))))));
    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((((((/* implicit */_Bool) 3419942729U)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) < (((/* implicit */long long int) ((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((var_11) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))) : (min((((/* implicit */unsigned long long int) var_16)), (var_10))))))));
}
