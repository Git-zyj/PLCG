/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171451
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551607ULL)))) ? (var_3) : ((-(3513054952U))));
                            arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (max((3513054952U), (781912329U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_0] [(unsigned char)11] [i_1] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) (-(min((1329919430U), (((/* implicit */unsigned int) var_5))))))) : (min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (0ULL)))))));
                            var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (_Bool)1))));
                        }
                        var_12 = min((max((((unsigned int) arr_9 [i_0] [i_1] [i_0] [i_3] [i_0] [i_0])), (((unsigned int) (unsigned char)75)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) || ((!(((/* implicit */_Bool) 5522317400183466012ULL))))))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (+(((unsigned int) max((((/* implicit */unsigned long long int) arr_11 [4ULL] [i_0] [4ULL] [i_0] [i_0] [i_0])), (5522317400183466017ULL)))))))));
    }
    var_14 = (-((~(var_0))));
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((short) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) == (2147483648U))))))))));
}
