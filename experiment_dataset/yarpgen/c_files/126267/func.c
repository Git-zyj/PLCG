/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126267
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((min((((/* implicit */int) var_11)), (var_6))) + (2147483647))) >> (((/* implicit */int) (signed char)5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(9647367835459406625ULL)))) || (((/* implicit */_Bool) ((unsigned long long int) 3625361955134700996ULL))))))) : (-5329866227677107034LL)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)206)) ? (max((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned short)31930)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 3])))))));
        var_16 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(var_0)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31911))) + (-1152921504606846976LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0]))))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (signed char)25))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)33624))))) : (max((((/* implicit */unsigned int) arr_0 [i_0 - 3] [i_0])), (0U))))))));
        var_17 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)30170)), (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 4294967287U)) : (20ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198)))))));
    }
    for (unsigned int i_1 = 3; i_1 < 21; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1]))) % (70368744144896ULL)))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_5 [i_2] [i_1])))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (arr_1 [i_1 + 2])))), (arr_3 [i_2]))))))));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) (short)-4401))), (arr_1 [i_1])))) ? ((+(((/* implicit */int) (unsigned short)33639)))) : (((/* implicit */int) arr_5 [i_2] [i_1])))))));
        }
        var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2425052727U)) ? (((/* implicit */int) (((!(((/* implicit */_Bool) -33775128)))) || (((/* implicit */_Bool) (unsigned short)33624))))) : ((+(((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1])) < (((/* implicit */int) var_7)))))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3 - 3])) && (((/* implicit */_Bool) arr_2 [i_3 - 3]))));
        var_22 = ((((/* implicit */_Bool) 1756967736U)) ? (arr_9 [i_3 - 3] [i_3 - 2]) : (((/* implicit */unsigned int) ((1252536285) ^ (2147483647)))));
    }
}
