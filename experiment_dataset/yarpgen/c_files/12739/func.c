/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12739
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
    for (short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_10 = ((/* implicit */int) (short)-25124);
                        var_11 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((-9223372036854775796LL) / (((/* implicit */long long int) (-2147483647 - 1)))))) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) ((signed char) var_8)))))));
                        var_12 = ((/* implicit */short) arr_7 [i_3] [i_2] [i_1] [i_0]);
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_13 ^= ((/* implicit */unsigned char) (+(-4543451472084809666LL)));
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))))))));
                        }
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            arr_14 [(_Bool)1] [i_1] [i_5] [(short)9] [i_3] [3ULL] = ((min((max((8594358286432894602LL), (((/* implicit */long long int) arr_9 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])))), (((/* implicit */long long int) (+(((/* implicit */int) var_2))))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_5)))) ? (2147483647) : (((/* implicit */int) var_7))))));
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 + 3] [2ULL] [2ULL] [i_3] [i_3] [i_5] [2])) ? (((((/* implicit */_Bool) var_9)) ? (-916680491) : (((/* implicit */int) arr_10 [i_0 - 2] [(_Bool)1] [i_2 + 1] [i_3] [i_5])))) : (((/* implicit */int) arr_8 [i_0 - 1]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)82)), ((unsigned short)63164))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_3 [i_0 + 3])) : (((/* implicit */int) arr_3 [(signed char)7]))))) ? (min((((/* implicit */long long int) (unsigned char)181)), (arr_0 [i_5]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_1))))))))))));
                        }
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) <= (max((((/* implicit */unsigned long long int) (unsigned char)82)), (arr_7 [(signed char)9] [i_0] [i_0] [i_0])))));
        arr_16 [i_0] |= ((/* implicit */long long int) ((arr_5 [i_0] [i_0] [i_0]) << (((((/* implicit */int) ((arr_5 [i_0] [i_0] [i_0]) == (((/* implicit */unsigned long long int) 2578426353049555754LL))))) & ((+(1349544161)))))));
        arr_17 [2] [(unsigned short)3] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-100)) && (((/* implicit */_Bool) (signed char)96)))))) / (((long long int) (short)32760))));
    }
    var_16 = var_6;
    var_17 = ((/* implicit */unsigned char) ((max((((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (2147483647) : (1718305145)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-56777503) : (var_0)))))))));
}
