/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124752
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
    var_11 *= var_4;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) var_0);
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) var_9)), (arr_8 [i_0])))) == ((~(((/* implicit */int) var_1))))))) >> (((((/* implicit */int) arr_10 [(short)8] [i_3])) - (97))))))));
                            var_14 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_2]);
                            arr_12 [i_3] [12ULL] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [(_Bool)1] [i_0])) ? (511ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (signed char)-31)) ? (3927836984530581460ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) 2011921535))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (2011921535) : (var_0)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)28595)))) : (((((/* implicit */_Bool) ((unsigned int) arr_9 [i_3] [i_0]))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)11603)) : (((/* implicit */int) var_4))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
