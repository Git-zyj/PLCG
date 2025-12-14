/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158412
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
    var_12 = ((/* implicit */unsigned char) var_7);
    var_13 = ((/* implicit */unsigned int) ((min((var_11), (((/* implicit */int) min((var_4), ((_Bool)1)))))) + (((/* implicit */int) var_10))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32932)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [(unsigned short)7])) : (((((/* implicit */_Bool) (unsigned short)32951)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32928))) : (10932640748229104323ULL)))));
        arr_4 [i_0] &= ((/* implicit */short) var_3);
        var_16 = (((~(((/* implicit */int) arr_3 [i_0])))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) ((((_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) max((min((var_0), (((/* implicit */long long int) (unsigned short)32625)))), (((/* implicit */long long int) ((971541775) < (((/* implicit */int) var_6)))))))) : ((~(10932640748229104323ULL)))));
        arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) 984953778)) | (2266008888U)));
        var_18 *= ((/* implicit */unsigned char) var_5);
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)221)))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -8987172601656885845LL)) * (15102184244253340151ULL)));
    }
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)122))))) ^ (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)42791)), (var_11)))) ? (arr_8 [8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) ((min((((10932640748229104336ULL) << (((3252724711879107452ULL) - (3252724711879107437ULL))))), (((/* implicit */unsigned long long int) ((short) (unsigned char)156))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100))) + (min((var_5), (((/* implicit */unsigned long long int) (unsigned char)99))))))));
            var_23 *= ((/* implicit */unsigned char) ((_Bool) (+(arr_2 [i_3]))));
        }
        /* LoopNest 2 */
        for (long long int i_4 = 3; i_4 < 9; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((unsigned char) ((8073234856325736416LL) << (((((var_5) << (((((/* implicit */int) var_1)) - (59211))))) - (8846508919832903680ULL)))))))));
                    arr_19 [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_15 [i_2] [(unsigned short)10] [i_5])) ? (((((/* implicit */int) var_8)) & (((/* implicit */int) var_7)))) : (((((/* implicit */int) var_8)) << (((var_5) - (3980191157702223094ULL))))))) << (((var_5) - (3980191157702223086ULL)))));
                    arr_20 [i_2] = ((/* implicit */unsigned long long int) 364709241140623696LL);
                }
            } 
        } 
    }
}
