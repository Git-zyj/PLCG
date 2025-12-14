/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180897
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_10)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min((((/* implicit */short) var_14)), ((short)31)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) 1625438492);
        var_21 = ((/* implicit */unsigned char) (-(arr_1 [i_0] [i_0])));
    }
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((min((((/* implicit */long long int) 0)), (var_6))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (13816264394597585866ULL))) - (13816264394597551226ULL))))) / (((/* implicit */long long int) min((-1), (((/* implicit */int) var_3))))))))));
    var_23 = ((/* implicit */unsigned long long int) (-(min((29), (((/* implicit */int) var_3))))));
    /* LoopSeq 3 */
    for (long long int i_1 = 2; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) -1254324369)) != (arr_0 [i_1 - 1]))))) - (((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (arr_0 [i_1 - 2]) : (((/* implicit */long long int) -49))))));
        var_25 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_4 [i_1 + 3])) : (((/* implicit */int) arr_4 [i_1 + 3]))))));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 11; i_2 += 1) /* same iter space */
    {
        arr_7 [i_2 - 2] [i_2 + 2] = ((/* implicit */signed char) ((arr_0 [i_2 + 2]) << (((arr_0 [i_2 + 2]) - (7245492220401331232LL)))));
        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)115))));
    }
    for (long long int i_3 = 2; i_3 < 11; i_3 += 1) /* same iter space */
    {
        arr_10 [i_3 + 2] [i_3] = ((/* implicit */long long int) (~(((((((/* implicit */int) arr_6 [i_3] [i_3 + 1])) + (940963306))) + (((((/* implicit */int) (signed char)4)) / (-34)))))));
        var_27 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 10376956688884679569ULL)))) : (17268946637396882440ULL))), (((/* implicit */unsigned long long int) ((arr_0 [i_3 - 2]) < (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_8)), ((short)-2609))))))))));
        arr_11 [(signed char)9] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (signed char)-76))))));
        var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 2297547137368897183ULL)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (signed char)6)))), (arr_8 [i_3 + 1])))) ? ((~(((((/* implicit */int) var_5)) + (((/* implicit */int) arr_3 [i_3] [i_3])))))) : (((/* implicit */int) arr_5 [i_3 - 2] [4U]))));
    }
}
