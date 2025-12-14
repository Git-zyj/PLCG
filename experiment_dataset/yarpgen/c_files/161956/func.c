/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161956
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
    var_14 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [(unsigned short)5] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                var_15 = ((/* implicit */unsigned char) var_10);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)52);
                var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_5))) && (((/* implicit */_Bool) (short)15))))) | (((/* implicit */int) min((arr_0 [2]), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)16308)) != (((/* implicit */int) (unsigned char)26))))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_12 [i_2] = ((/* implicit */unsigned char) (((_Bool)1) ? (191573295850407744ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50201)))));
            arr_13 [i_2] [i_2] [i_2] = var_8;
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_16 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_10 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) (short)20))))) ? (((/* implicit */unsigned long long int) min((arr_8 [22ULL] [i_2]), (((/* implicit */unsigned int) var_9))))) : ((+(arr_10 [i_2] [i_2] [i_2]))))) / (((/* implicit */unsigned long long int) ((arr_7 [i_4 - 1] [i_4 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_9 [i_2] [i_4])), ((short)5835))))))))));
            arr_17 [i_2] = ((/* implicit */signed char) arr_7 [i_4] [i_2]);
            var_17 ^= var_8;
            var_18 &= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)18972)) >= (((/* implicit */int) (unsigned short)15347)))))));
        }
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_20 [(unsigned short)20] [i_2] [i_2] = arr_19 [i_2] [i_2];
            arr_21 [i_2] = ((/* implicit */unsigned int) ((_Bool) -1554779892));
        }
        arr_22 [i_2] = ((/* implicit */_Bool) var_11);
        var_19 = ((/* implicit */signed char) (((~(((/* implicit */int) (short)-6)))) <= ((-(((/* implicit */int) min((((/* implicit */unsigned char) arr_14 [i_2] [i_2 + 1])), (var_0))))))));
        var_20 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) (signed char)114)))), ((-(((/* implicit */int) (short)6))))));
        arr_23 [i_2] = ((/* implicit */unsigned short) arr_18 [i_2 + 1] [i_2 + 1]);
    }
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((-1554779892), (((/* implicit */int) var_1)))))))))))));
}
