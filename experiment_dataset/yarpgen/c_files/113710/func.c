/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113710
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
    var_16 = ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_3))));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)116))))) ? (((((/* implicit */_Bool) 1514918476)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)108)))) : (((((/* implicit */_Bool) -635650496)) ? (635650505) : (((/* implicit */int) var_5)))))))))));
    var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((arr_1 [i_0] [i_0]) | (arr_1 [i_0] [i_0])));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((signed char) arr_1 [i_0] [i_0]))) : (((/* implicit */int) ((((/* implicit */unsigned int) arr_0 [i_0])) > (arr_1 [i_0] [i_0]))))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_14))) ? (((/* implicit */unsigned int) (+(arr_0 [i_0])))) : (arr_1 [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            {
                var_21 = ((/* implicit */short) ((arr_6 [i_2] [i_2] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_7 [i_1] [1U])) == (((/* implicit */int) var_4)))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1])))))))))));
                /* LoopNest 2 */
                for (signed char i_3 = 2; i_3 < 14; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        {
                            var_22 = ((((/* implicit */int) arr_7 [i_1] [(unsigned char)5])) | (((/* implicit */int) var_4)));
                            arr_14 [5ULL] [i_2] [i_3 + 1] [i_4] = ((/* implicit */unsigned long long int) arr_3 [(_Bool)1]);
                            var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) -635650496))) == ((~(635650501))))))) == (((((/* implicit */_Bool) arr_9 [i_3] [i_3 + 4] [i_3 + 1] [i_3])) ? (arr_6 [i_3 + 4] [i_3 + 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [i_3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
