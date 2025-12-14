/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160781
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            var_16 ^= ((/* implicit */unsigned short) arr_8 [i_4 + 2] [i_4] [i_4 - 1] [i_4 + 1] [i_4] [i_4 + 1]);
                            var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_5 [i_4 - 1] [i_4 + 1]), ((_Bool)0)))), (max((((/* implicit */int) arr_5 [i_4 + 2] [i_4 + 2])), (2147483647)))));
                            var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) 3433604696U)))));
                        }
                        var_19 = ((/* implicit */_Bool) max(((-(((0ULL) * (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2])))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))));
                        var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (5779882554961117917ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8242606391579145607ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (861362598U)))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_5 = 2; i_5 < 23; i_5 += 1) /* same iter space */
        {
            arr_17 [21ULL] [i_5] = ((/* implicit */int) (+((~(1278937648U)))));
            var_21 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (unsigned char)0))));
        }
        for (long long int i_6 = 2; i_6 < 23; i_6 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) arr_12 [i_0] [i_6] [i_6 - 2] [i_6 + 2])) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) var_10)), (var_5))))))))));
            var_24 = -914172876672512300LL;
        }
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0)))))));
        var_26 = ((/* implicit */long long int) ((_Bool) (+((+(((/* implicit */int) var_7)))))));
    }
    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (+((+(18446744073709551613ULL))))))));
}
