/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151017
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
    var_18 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) var_4))));
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_12))));
    var_20 = ((/* implicit */unsigned short) ((signed char) (short)7));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
            arr_6 [i_1] = ((/* implicit */signed char) ((unsigned int) (unsigned char)242));
            var_21 = ((signed char) (unsigned short)65518);
        }
        for (long long int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)17)) << (((3733677414U) - (3733677392U))))))));
            var_23 = ((/* implicit */int) ((561289877U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18)))));
            var_24 = 561289870U;
            var_25 -= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)30038))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            var_26 = ((/* implicit */unsigned char) var_16);
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((signed char) (signed char)-123)))));
            arr_12 [i_3] = ((/* implicit */int) var_17);
        }
        arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)9)) << (((var_11) - (4031123258U)))));
        var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) (unsigned short)35))));
        var_29 ^= ((/* implicit */signed char) 15529031904910678282ULL);
    }
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            arr_20 [i_4] = ((/* implicit */unsigned int) arr_14 [i_4] [i_5]);
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (long long int i_7 = 1; i_7 < 7; i_7 += 2) 
                {
                    {
                        var_30 *= var_14;
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 1; i_8 < 9; i_8 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-26310)) ? (1528085525U) : (((/* implicit */unsigned int) 2147483647))));
                            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65492)))))));
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((int) 5290956132988944176ULL)))));
                        }
                    }
                } 
            } 
        }
        arr_29 [i_4] = min((5945756884188145935ULL), (((/* implicit */unsigned long long int) (signed char)-6)));
    }
    var_34 = ((/* implicit */unsigned int) min(((short)26315), ((short)10)));
}
