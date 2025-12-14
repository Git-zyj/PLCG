/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172208
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
    var_10 = ((/* implicit */unsigned short) (~(((int) min(((short)-14), (((/* implicit */short) var_7)))))));
    var_11 |= ((/* implicit */unsigned int) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = var_3;
        var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)22725)) > (((/* implicit */int) (signed char)113))))), (((((/* implicit */_Bool) 4ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */long long int) ((((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_0])))) >> (((/* implicit */int) min(((unsigned short)58731), (((/* implicit */unsigned short) arr_5 [i_1 + 1] [i_1] [i_0]))))))) < (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (short)-9688)) & (var_4)))))));
            var_14 = ((/* implicit */signed char) (-(max((((/* implicit */long long int) (unsigned short)5998)), (((long long int) var_3))))));
            var_15 = ((/* implicit */short) var_0);
            arr_7 [(signed char)10] [i_0] = ((/* implicit */long long int) ((14370367462615147165ULL) + (14370367462615147165ULL)));
        }
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 2; i_3 < 16; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        var_16 = ((/* implicit */signed char) ((_Bool) var_9));
                        var_17 = ((/* implicit */int) var_7);
                    }
                } 
            } 
            arr_16 [i_0] = ((/* implicit */signed char) var_0);
        }
        var_18 = max((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_0] [i_0]) % (((/* implicit */long long int) (((_Bool)1) ? ((-2147483647 - 1)) : (arr_0 [i_0]))))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_6) * (min((arr_3 [i_0] [i_0]), (arr_8 [i_0])))))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-25980))))) == (((unsigned long long int) var_1)))))));
    }
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-(var_6))))));
    var_21 = ((/* implicit */short) var_8);
}
