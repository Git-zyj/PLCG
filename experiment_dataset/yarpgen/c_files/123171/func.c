/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123171
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) var_7);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0])) / (341367845))) >> (((((((/* implicit */_Bool) 1611968643)) ? (arr_0 [i_0]) : (arr_0 [i_0]))) - (8736438994039943549LL)))));
        var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) 1974661492)) ? (-7616108461407365997LL) : (((/* implicit */long long int) -341367846)))) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -341367855))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_1])) | ((~((~(((/* implicit */int) (_Bool)1))))))));
        var_15 = ((/* implicit */long long int) ((min((max((743498830), (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) var_5)))) / (-341367845)));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    var_16 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((-1342662223) | (((/* implicit */int) (signed char)96)))))));
                    var_17 = min((((((/* implicit */_Bool) var_6)) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))), (((((/* implicit */_Bool) min((arr_4 [(_Bool)1]), (((/* implicit */int) var_3))))) ? (min((2U), (((/* implicit */unsigned int) var_11)))) : (((((/* implicit */_Bool) arr_1 [12LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_1))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) min((-1068280497946985591LL), (4837855614436405165LL))))) | (min((((((/* implicit */_Bool) var_7)) ? (713206758894092208LL) : (((/* implicit */long long int) arr_8 [14U])))), (arr_0 [i_1])))));
    }
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned int) ((arr_12 [i_4]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)206)) ? (2122524341) : (((/* implicit */int) arr_1 [i_4])))))));
        var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(arr_8 [i_4])))) ? (((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4]))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (~(-492575715131279407LL)))) ? (1973566396U) : (arr_5 [i_4])))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [(unsigned short)0]))))) ? ((-(((((/* implicit */_Bool) arr_8 [i_4])) ? (arr_0 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */long long int) var_10)))))));
    }
    var_22 = ((/* implicit */unsigned int) ((min((max((var_1), (0U))), (((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (-2131896069)))))) <= (((/* implicit */unsigned int) -1))));
    var_23 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_2)))));
}
