/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175543
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
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (+((+(max((32767), (((/* implicit */int) arr_3 [i_1]))))))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_16 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_2 + 1] [6ULL] [i_0 + 1])) ? (493903674) : (((((/* implicit */int) arr_3 [(short)0])) & (((/* implicit */int) var_14)))))) & (((((/* implicit */_Bool) 1259763390U)) ? ((-(32767))) : (((((/* implicit */_Bool) -32768)) ? (-32788) : (((/* implicit */int) (unsigned short)0))))))));
                    arr_9 [(unsigned char)10] [2] [2] |= ((/* implicit */short) (+(((/* implicit */int) ((min((-32768), (((/* implicit */int) (short)-30679)))) <= (((int) (unsigned short)11986)))))));
                    arr_10 [i_1] = ((/* implicit */signed char) var_12);
                    var_17 = ((/* implicit */unsigned int) ((short) arr_5 [i_0] [i_1] [i_0]));
                }
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    var_18 -= ((/* implicit */short) (!(((/* implicit */_Bool) (short)9329))));
                    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (short)32767)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (max((var_1), (arr_4 [i_0 + 2] [i_0 + 2]))))))));
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 14; i_4 += 1) 
                {
                    arr_15 [i_0] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_8 [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((unsigned short) 247055539U));
                        var_21 = ((/* implicit */unsigned int) (-(9888168267986263153ULL)));
                    }
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38943)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4 + 2]))) : (var_11)));
                }
                var_23 ^= ((/* implicit */unsigned short) (((~(var_0))) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)4)), (arr_7 [(short)0] [4ULL] [(short)0])))))));
                var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */int) (unsigned short)10532)) != (((/* implicit */int) (signed char)127))))))));
                var_25 = ((/* implicit */unsigned long long int) (short)252);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        for (unsigned short i_7 = 3; i_7 < 19; i_7 += 2) 
        {
            {
                arr_25 [11ULL] [i_6] = 32767;
                arr_26 [(_Bool)1] [i_6] [i_6] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_21 [8ULL] [i_6])) ? (((/* implicit */unsigned long long int) 0U)) : (max((var_3), (((/* implicit */unsigned long long int) var_11)))))));
                var_26 = ((/* implicit */_Bool) 32746);
            }
        } 
    } 
}
