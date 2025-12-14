/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104207
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
    var_20 = ((/* implicit */unsigned long long int) (((-(((((/* implicit */int) (signed char)-65)) & (((/* implicit */int) (unsigned char)80)))))) % (((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) == (arr_0 [i_0])))), (arr_1 [i_0])))), (max((((((/* implicit */int) (unsigned char)228)) | (((/* implicit */int) (unsigned char)137)))), (((/* implicit */int) (unsigned char)244))))));
        var_21 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) max(((unsigned char)228), ((unsigned char)244))))))) > ((+((-(arr_0 [(unsigned char)16])))))));
        var_22 ^= ((/* implicit */short) min((((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_1 [(signed char)10])), (arr_0 [(signed char)22]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [2U])))))), ((~(((/* implicit */int) arr_1 [(signed char)6]))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)244)) && (((/* implicit */_Bool) (signed char)-127))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_23 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))) == (((/* implicit */int) ((short) (unsigned char)255))));
        var_24 -= ((/* implicit */unsigned int) max(((unsigned char)255), ((unsigned char)129)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((unsigned char) (~(((/* implicit */int) arr_4 [i_2]))));
        arr_10 [i_2] = ((/* implicit */short) ((_Bool) 492581209243648ULL));
        arr_11 [i_2] = ((/* implicit */unsigned short) (~((-(arr_8 [i_2] [i_2])))));
        arr_12 [i_2] = ((/* implicit */signed char) (+(((long long int) (signed char)(-127 - 1)))));
    }
}
