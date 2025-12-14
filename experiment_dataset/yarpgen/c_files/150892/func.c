/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150892
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 |= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 3] [(unsigned short)4])) ? (((/* implicit */unsigned long long int) 15)) : (2386882663220441910ULL))) : (((/* implicit */unsigned long long int) 4294967295U))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 1835370436U)) ? (((/* implicit */int) arr_7 [14U] [(unsigned char)19] [i_2] [i_3])) : (((/* implicit */int) (unsigned short)37409)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)79)) == (((/* implicit */int) (signed char)3)))) ? (((((/* implicit */_Bool) var_11)) ? (arr_6 [i_0] [i_1] [i_1]) : (((/* implicit */int) arr_5 [i_3])))) : (((/* implicit */int) arr_7 [i_3 + 1] [i_2] [i_2] [i_1 - 2]))))) : (((((/* implicit */unsigned long long int) (((_Bool)1) ? (var_2) : (2805183552U)))) % (((288230376151711744ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31742)))))))));
                            var_13 = ((/* implicit */_Bool) (signed char)-77);
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? ((-(2624190148931716364ULL))) : (((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_4 [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 - 3] [i_3 - 3] [i_3] [i_1 - 2] [i_1] [10LL]))))))));
                            var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 2624190148931716345ULL))) ? (((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (5ULL) : (((/* implicit */unsigned long long int) 2512763339U)))) * (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_6 [i_0] [i_0] [i_0]))) ? (((/* implicit */int) ((signed char) (signed char)-111))) : (((/* implicit */int) ((signed char) (signed char)96))))))));
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_0 [i_1 + 2] [i_3]), (arr_0 [i_2] [12ULL])))) || (((/* implicit */_Bool) arr_5 [i_0]))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [8ULL] = ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)-28271))))) ? (((((/* implicit */unsigned int) 268369920)) / (3622597498U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68))))) % (((/* implicit */unsigned int) ((/* implicit */int) (((+(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 - 1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)110)), ((short)32752))))))))));
                var_17 = ((/* implicit */unsigned long long int) (signed char)50);
            }
        } 
    } 
    var_18 = ((/* implicit */short) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (signed char)-114)) ? (var_9) : (((/* implicit */int) (short)-15243))))));
}
