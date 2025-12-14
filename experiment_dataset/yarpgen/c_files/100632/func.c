/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100632
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
    for (short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-126))))));
                var_15 = ((/* implicit */unsigned char) (+(max((2181431069507584LL), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)20)))))))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
                {
                    var_16 = ((((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)136))))) : (((/* implicit */int) ((unsigned short) (unsigned char)100))))) == (min((-536870912), (((/* implicit */int) arr_3 [i_0 - 1] [i_0])))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_12)) * (((/* implicit */int) (unsigned char)142)))))) - (((/* implicit */int) var_1))));
                    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) ^ (min((((/* implicit */long long int) (_Bool)1)), (-2181431069507593LL))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))) : (((unsigned int) (signed char)74)))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((_Bool) ((unsigned int) var_12)));
                    var_19 *= ((/* implicit */unsigned short) ((unsigned long long int) arr_4 [i_0 - 2]));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((3104309739402666449LL) ^ (((/* implicit */long long int) 3651336325U)))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_1] [i_1])))))))));
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 1] [i_0 - 3]))));
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)90)))))));
                }
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-8)), (min((((/* implicit */int) (!(((/* implicit */_Bool) 347435228U))))), ((-(((/* implicit */int) arr_18 [i_0] [(signed char)11] [i_0]))))))));
                    var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) arr_19 [i_1])))) : (((/* implicit */int) (_Bool)1))));
                    arr_20 [i_0] [(_Bool)1] [(unsigned char)4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) 12ULL))));
                }
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 - 3] [i_0 - 3] [i_1] [i_5])) || (((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_5]))))))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_11 [i_0] [i_0] [i_0 - 2]), (arr_11 [i_0] [i_0] [i_0 - 2])))) ? (max((((/* implicit */unsigned long long int) ((short) var_11))), (10219623914397803041ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65280)), (-8776146167171889253LL)))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17971))))))));
                    var_25 = ((/* implicit */unsigned int) ((signed char) ((arr_8 [i_0 - 1] [i_0] [i_0 + 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)-20)))))));
                }
                arr_24 [i_0] = ((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_0 + 1]);
            }
        } 
    } 
    var_26 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)235)), ((unsigned short)10847)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))) : (var_0)))));
}
