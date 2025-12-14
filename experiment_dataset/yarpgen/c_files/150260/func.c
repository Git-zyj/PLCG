/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150260
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_12 = ((2073052754658017672ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_13 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) min((12517603718838351152ULL), (((/* implicit */unsigned long long int) var_4))))) ? ((-(16795257374628414486ULL))) : (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) (-(12452371030648202853ULL)))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) var_6)));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)5384))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)-61)))) : (((((/* implicit */_Bool) (unsigned short)5384)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    }
    for (signed char i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        var_15 = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_1 - 2] [14])) ? (var_8) : (((/* implicit */int) var_10)))) + (((/* implicit */int) arr_4 [i_1 + 1])))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 3; i_3 < 20; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                for (int i_5 = 2; i_5 < 21; i_5 += 4) 
                {
                    {
                        arr_15 [i_3] = var_3;
                        arr_16 [i_2 - 1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) 1852171672);
                    }
                } 
            } 
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) (signed char)91)) + (((/* implicit */int) var_0)))) : (1852171657))))));
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_10))));
        }
        arr_17 [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13943621287823298109ULL)) ? ((~(1852171672))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (arr_12 [i_2] [(unsigned short)12] [(unsigned short)12] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1651486699081137119ULL)) ? (0) : (((/* implicit */int) (unsigned short)27921))))) : (((((/* implicit */_Bool) ((2382418030450668365ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13427)))))) ? (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) 1010184639))))));
    }
    /* LoopSeq 1 */
    for (int i_6 = 3; i_6 < 20; i_6 += 3) 
    {
        arr_20 [i_6] = ((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6]);
        arr_21 [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_12 [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 1]), ((signed char)58)))), (((((/* implicit */_Bool) (~(17U)))) ? (max((-1010184664), (1900136014))) : (((/* implicit */int) (!(((/* implicit */_Bool) -743890147)))))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)0))))))) ? (max((arr_18 [6]), (((/* implicit */unsigned int) (signed char)85)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2090354294U)))))))))));
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
        var_21 = ((/* implicit */short) (signed char)(-127 - 1));
    }
}
