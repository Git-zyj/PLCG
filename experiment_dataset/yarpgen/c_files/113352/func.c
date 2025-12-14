/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113352
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
    var_17 *= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (var_10)))) ? (((17553110935394034947ULL) + (893633138315516683ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */long long int) var_6))))))) | (17553110935394034978ULL));
    var_18 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)1)) >> (2U)))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10)) ? (var_5) : (893633138315516675ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))) / (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -1065093852))))))));
    var_19 = ((signed char) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)42))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(min((((/* implicit */int) var_4)), (arr_0 [4LL] [i_0])))))) ? (((/* implicit */unsigned long long int) (+(3432109245U)))) : (var_5)));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_9 [(unsigned short)14] [i_0] [(short)3] [i_0] [(_Bool)1] = ((/* implicit */short) min((min((((((/* implicit */_Bool) arr_8 [14U] [(unsigned char)2] [i_0] [(unsigned short)0] [(signed char)8] [9U])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27))))), (((/* implicit */unsigned int) min((115120768), (((/* implicit */int) (short)(-32767 - 1)))))))), (((/* implicit */unsigned int) max((arr_6 [(unsigned char)12] [i_3] [(signed char)17] [i_3] [(unsigned char)16] [i_0]), (((((/* implicit */_Bool) (unsigned char)195)) || (((/* implicit */_Bool) var_5)))))))));
                            var_21 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_6 [(short)2] [16] [(short)12] [(signed char)18] [(unsigned char)8] [i_3]))))) == (min((var_0), (((/* implicit */unsigned int) (short)24493))))))) ^ ((+((-(((/* implicit */int) arr_1 [14ULL]))))))));
                            arr_10 [i_0] [(short)5] [(signed char)14] [(short)15] = ((/* implicit */unsigned long long int) arr_1 [(_Bool)1]);
                            var_22 = ((/* implicit */_Bool) ((unsigned char) (+((+(((/* implicit */int) (unsigned short)24)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
