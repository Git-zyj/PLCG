/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158785
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
    var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)3))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) * ((+(arr_2 [i_1] [i_1] [i_1])))));
            arr_6 [i_0] [i_0] [i_0 - 1] = ((/* implicit */int) (unsigned char)253);
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((long long int) 9007190664806400ULL)) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)252)))))));
            arr_8 [(signed char)12] = ((/* implicit */_Bool) min((18437736883044745213ULL), (((/* implicit */unsigned long long int) (unsigned char)154))));
        }
        arr_9 [i_0] = ((/* implicit */short) (-(((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)90)) || (((/* implicit */_Bool) (unsigned short)65535))))) & ((~(((/* implicit */int) (unsigned short)65535))))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_14 [i_2 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)238)) / (((/* implicit */int) var_7))))) ? (5814884999970700166ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 1])))))) ? (((/* implicit */int) ((((/* implicit */int) (!(var_16)))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2 - 1])) && (((/* implicit */_Bool) var_14))))));
        arr_15 [i_2] = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */int) max((((/* implicit */short) (signed char)-103)), ((short)-1)))), (((((/* implicit */int) (unsigned short)63175)) << (((((/* implicit */int) (unsigned char)50)) - (35))))))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            arr_19 [(unsigned char)6] [(unsigned char)6] [i_3] = ((/* implicit */signed char) ((_Bool) (unsigned char)25));
            arr_20 [i_3] [2] [2] = max((((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_17 [i_3] [15U])), (var_5)))), (arr_1 [i_2 - 1] [i_2])))), (((((/* implicit */_Bool) ((9007190664806414ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2366)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_2 - 1] [i_3]))))) : (arr_4 [i_3] [i_3] [i_2]))));
        }
        arr_21 [i_2] = ((/* implicit */long long int) (+(min((((/* implicit */int) arr_3 [i_2 - 1])), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-105))))))));
        arr_22 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 647887213U)) ? ((~(7218799576237828120LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((arr_13 [i_2]), (((/* implicit */unsigned char) (signed char)124))))) == (((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) (unsigned short)9212)) : (((/* implicit */int) (unsigned short)2346))))))))));
    }
}
