/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149820
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
    var_20 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_11)) | (((((/* implicit */_Bool) 16823100985824892354ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [(signed char)8] [(signed char)8] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 4905285549446263256ULL)) ? (((/* implicit */int) ((signed char) 66584576U))) : (((/* implicit */int) arr_0 [i_0 + 1])))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned short) ((unsigned char) ((((unsigned int) arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3])) + (((((/* implicit */_Bool) 705549316621806132LL)) ? (((/* implicit */unsigned int) arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 2])) : (arr_6 [i_0 - 2] [(unsigned short)9] [i_3]))))));
                            var_22 = (((((+(((/* implicit */int) arr_2 [i_3])))) != ((+(((/* implicit */int) arr_2 [i_1])))))) ? (max((((/* implicit */unsigned int) arr_3 [(signed char)14] [i_0 - 1])), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
                {
                    for (unsigned int i_5 = 3; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_5] [i_6]))));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((unsigned int) arr_18 [i_0 - 1] [(unsigned char)19] [i_0 - 2] [(unsigned char)10])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((4220283997U), (((/* implicit */unsigned int) -563470486)))) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_19)) : ((~(((/* implicit */int) (signed char)-95)))))))));
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)16614)) : (((/* implicit */int) var_0)))))) ? (var_9) : (var_16)));
}
