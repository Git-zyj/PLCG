/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168885
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
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) var_10))))) : (max((((/* implicit */long long int) var_10)), (4290979208930474984LL)))))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_13)) >= (((/* implicit */int) (unsigned short)47997)))) ? (var_7) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)111)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_11 [8ULL] [i_1] [i_1] = ((/* implicit */short) ((_Bool) ((18248110434615860970ULL) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) var_11);
                                var_21 = ((((/* implicit */_Bool) (signed char)117)) ? (4290979208930474984LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) min((arr_14 [i_0] [i_0] [i_1] [i_1] [8LL]), (((int) ((((/* implicit */_Bool) arr_0 [7LL] [i_1])) ? (-183918057) : (((/* implicit */int) var_10)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)0)))), (((arr_16 [i_0]) >> (((arr_13 [i_0] [i_0] [(signed char)6] [i_0] [i_0] [i_0]) - (2033491408939141921LL))))))))));
    }
    var_24 = (-(0LL));
    var_25 = ((/* implicit */_Bool) (-(var_7)));
    var_26 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_15)))) / (((/* implicit */int) var_14))));
}
