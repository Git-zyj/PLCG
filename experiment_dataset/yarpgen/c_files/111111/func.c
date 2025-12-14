/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111111
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2 - 1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) max((((arr_10 [i_1 + 3]) | (8388607ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0]))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)40303)))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            var_15 *= ((_Bool) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                            var_16 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_3 [(_Bool)1]))))));
                            var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)40283))));
                            var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((signed char) max(((unsigned short)40305), ((unsigned short)40287))))), (((unsigned char) ((arr_10 [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_1 [(unsigned char)14])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)6])) ? (((/* implicit */int) arr_2 [(unsigned short)4])) : (((/* implicit */int) (signed char)30))))) : (((((/* implicit */_Bool) arr_1 [(unsigned short)6])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14)))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (unsigned char)241))));
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)28)), ((unsigned short)65528)))) ? (((((/* implicit */_Bool) arr_16 [8ULL] [8ULL] [i_5] [i_3] [(unsigned char)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [12ULL] [12ULL]))) : (arr_16 [14] [(signed char)22] [i_2] [i_1 - 2] [14]))) : (min((214732495396798504ULL), (((/* implicit */unsigned long long int) (unsigned short)19)))))), (((/* implicit */unsigned long long int) (unsigned short)40287)))))));
                        }
                    }
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) ((short) (+(((/* implicit */int) arr_15 [10ULL] [i_6] [i_6] [i_6] [i_2 + 2] [i_2])))));
                        var_23 = ((/* implicit */short) (~(max((arr_5 [i_2 + 1] [i_1] [i_0]), (arr_5 [i_2 + 2] [i_1 + 2] [i_0])))));
                    }
                    for (int i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        arr_21 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)40294)) >= (704429845)))) % (((int) (unsigned char)255))));
                        arr_22 [i_0] [i_1] = arr_1 [i_0];
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned char)2))))) ? (min((((unsigned long long int) (unsigned short)65510)), (var_12))) : (((unsigned long long int) arr_17 [i_7] [i_1 + 4] [i_1 + 4] [i_2] [i_0]))));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) min(((unsigned short)5258), (((/* implicit */unsigned short) ((unsigned char) (~(var_7)))))));
    var_26 += ((/* implicit */unsigned long long int) var_6);
}
