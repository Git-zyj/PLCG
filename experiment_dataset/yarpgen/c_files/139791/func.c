/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139791
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
    var_14 = ((/* implicit */unsigned char) var_6);
    var_15 = ((unsigned char) min((((1745988877249670179LL) >> (((3136770586U) - (3136770548U))))), ((~(-6668866008488298504LL)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((int) ((((long long int) 3136770586U)) << ((((~(arr_4 [i_0] [i_0] [i_2]))) + (2509918774810657632LL))))))) : (((/* implicit */signed char) ((int) ((((long long int) 3136770586U)) << ((((((~(arr_4 [i_0] [i_0] [i_2]))) + (2509918774810657632LL))) - (4061054287451241967LL)))))));
                        var_16 = ((/* implicit */unsigned int) max(((+(var_10))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0])))))));
                        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */long long int) 1167844296U)), (var_1)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_3])))) & (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)31))) || (((/* implicit */_Bool) 1158196683U)))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */signed char) (unsigned char)28);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_4 = 3; i_4 < 16; i_4 += 1) 
        {
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_4 [i_4 - 1] [i_0] [i_4]);
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))));
            arr_15 [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) <= (arr_9 [i_0])));
            /* LoopNest 2 */
            for (long long int i_5 = 1; i_5 < 15; i_5 += 4) 
            {
                for (long long int i_6 = 2; i_6 < 15; i_6 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 1; i_7 < 17; i_7 += 4) 
                        {
                            arr_25 [i_6] [i_6] [i_5] [i_0] [i_6] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-32)) ? (4120055217299451299LL) : (arr_4 [i_0] [i_6] [i_5]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 639938585U)) ? (((/* implicit */int) (unsigned char)190)) : (var_13))))));
                            var_20 = ((/* implicit */int) max((var_20), ((-(((/* implicit */int) ((signed char) 4120055217299451299LL)))))));
                        }
                        for (unsigned int i_8 = 3; i_8 < 15; i_8 += 4) 
                        {
                            arr_28 [i_8] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)28))));
                            arr_29 [i_5] [i_5] [i_5] [i_0] [i_5] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_4])) ? (((/* implicit */long long int) 332657743U)) : (arr_18 [i_0]))));
                        }
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((((/* implicit */int) arr_12 [i_0] [i_4 + 3])) << (((((/* implicit */int) arr_12 [i_0] [i_4 - 1])) - (204))))) : (((((/* implicit */int) arr_12 [i_0] [i_4 + 3])) << (((((((/* implicit */int) arr_12 [i_0] [i_4 - 1])) - (204))) - (32)))));
                    }
                } 
            } 
        }
    }
}
