/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168942
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
    var_18 = ((/* implicit */int) max((var_18), (min((((((((/* implicit */int) var_0)) <= (((/* implicit */int) var_7)))) ? (((/* implicit */int) (unsigned short)8776)) : (((/* implicit */int) max((((/* implicit */signed char) var_15)), ((signed char)-42)))))), (((var_11) % (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)122))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) min(((unsigned short)9447), (((/* implicit */unsigned short) (short)(-32767 - 1)))))) ? (((/* implicit */int) ((unsigned short) -1305203651))) : (-2147483644))) == (min((((/* implicit */int) (signed char)-7)), (((((/* implicit */int) (unsigned short)19643)) << (((((((/* implicit */int) (signed char)-98)) + (121))) - (10)))))))));
                var_20 &= ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_4 [i_1])))) != ((+(((/* implicit */int) arr_2 [i_1] [i_0]))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_21 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(max((arr_5 [i_0] [i_0] [i_2]), (((/* implicit */long long int) arr_2 [21ULL] [(short)14]))))))) <= (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (+(var_2))))))));
                    var_22 = ((/* implicit */_Bool) var_2);
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)13219)))));
                    var_23 |= ((/* implicit */unsigned short) ((((int) (unsigned short)3713)) + (((/* implicit */int) ((((((/* implicit */_Bool) (short)24010)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)15]))) : (arr_6 [i_2] [i_2] [i_0] [i_0]))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) arr_1 [(unsigned short)5])))))))))));
                    var_24 |= ((/* implicit */int) max((arr_6 [i_0] [i_1] [i_2] [i_0]), (((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) var_12))))))));
                }
                for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)61822))));
                    arr_11 [i_3] [(_Bool)1] [8ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [8] [i_1] [i_3] [(short)11]))))) ? ((-(((/* implicit */int) var_12)))) : (((((/* implicit */int) arr_1 [i_0])) / (var_6)))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (arr_10 [i_0] [11LL] [i_1]))) : ((~(9223372036854775807LL))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_3]))))) ? (((/* implicit */int) (!(((-6359978622345585234LL) == (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [21ULL] [i_1] [i_1])))))))) : ((+(((/* implicit */int) (unsigned short)22756))))));
                }
            }
        } 
    } 
    var_27 = (-(((/* implicit */int) min(((signed char)-124), (((/* implicit */signed char) (_Bool)1))))));
}
