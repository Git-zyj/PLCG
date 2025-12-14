/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162608
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */int) (short)14336)) > (((((/* implicit */_Bool) (short)14336)) ? (((/* implicit */int) (short)14336)) : (((/* implicit */int) (_Bool)0))))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) ? ((~(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0])))))) && (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 1832940813)) ? (-689400899) : (1832940831)))))));
        var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)14336))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32018))))) ? (((unsigned int) ((((/* implicit */_Bool) 13)) ? (4081111294U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14336)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14336)))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (short)-14336))) ? (((((/* implicit */_Bool) (-(2147483647)))) ? (((((/* implicit */_Bool) (unsigned short)47368)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35133))) : (arr_5 [17]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)64565)) ? (1832940813) : (-5765900)))))) : (min((((unsigned long long int) (unsigned short)13064)), (((/* implicit */unsigned long long int) ((unsigned char) (short)23162)))))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_2 [i_2 + 1]) == (arr_2 [i_2 - 1]))))));
            arr_8 [2] [0ULL] [i_2] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)10903)) && (((/* implicit */_Bool) 18446744073709551615ULL))))) * (-1832940813))));
            var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (short)14335))))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-23216)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45696))))))) ^ (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (unsigned short)19850)) : (((/* implicit */int) (unsigned short)13064))))));
        }
        for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned int) var_10))) ? (min((((/* implicit */unsigned long long int) -885867820)), (1966080ULL))) : (((/* implicit */unsigned long long int) ((int) (unsigned short)52454)))))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                for (int i_5 = 1; i_5 < 19; i_5 += 2) 
                {
                    {
                        var_24 = ((/* implicit */short) arr_6 [5] [i_3] [i_3]);
                        arr_17 [i_0 + 2] [i_3 + 3] [i_3] [i_5] = ((/* implicit */int) (!(((((/* implicit */_Bool) (+(((/* implicit */int) (short)0))))) || (((((/* implicit */int) (unsigned char)1)) >= (((/* implicit */int) (unsigned short)2609))))))));
                    }
                } 
            } 
        }
        for (int i_6 = 3; i_6 < 20; i_6 += 2) 
        {
            var_25 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6] [i_6 - 3] [i_6])) ? (5026629987507853674ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4412)))))) ? (min((((/* implicit */unsigned int) (-2147483647 - 1))), (var_0))) : (((/* implicit */unsigned int) 1048568)))));
            arr_21 [i_6] = ((/* implicit */unsigned long long int) (unsigned short)2609);
        }
    }
    var_26 = ((/* implicit */short) var_6);
}
