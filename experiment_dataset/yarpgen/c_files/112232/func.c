/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112232
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((((/* implicit */_Bool) 4167965207U)) ? (134217728U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) var_11))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) (signed char)1)))) - (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (signed char)-19))))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_2 [i_1 - 2] [0U])), ((+(1535103318U)))))), (((((/* implicit */_Bool) ((unsigned char) var_3))) ? (max((2199022731264LL), (((/* implicit */long long int) arr_0 [1LL] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (var_16)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) max((-370137238), (var_0))))));
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6256393509933297843ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : ((-(85392971U)))))) ? (min((((unsigned long long int) (unsigned char)0)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (4209574340U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))))))))));
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [12LL])) ? ((+(4209574357U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_7 [i_2] [i_3])), (arr_10 [(unsigned char)14] [i_2] [10LL])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_3] [i_2])) | (435333399)))), (max((4209574338U), (((/* implicit */unsigned int) 2147483647)))))))))));
            arr_11 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_7 [i_3] [i_2])))), (((/* implicit */int) arr_7 [12] [i_3]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_2] [i_3]))) : (4209574340U)))) || (((/* implicit */_Bool) var_16))))) : (((((/* implicit */_Bool) 85392988U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)-39))))));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? ((~(85392955U))) : ((((~(85392957U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(short)22] [i_3] [i_3]))))))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_2] [i_2] [(unsigned char)1] [i_5])), (var_6))))))))))));
                        arr_16 [(signed char)9] [i_3] [i_3] [(signed char)9] = var_14;
                    }
                } 
            } 
        }
        arr_17 [i_2] = ((/* implicit */unsigned long long int) (signed char)-92);
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_2] [i_2] [(unsigned char)11] [(unsigned char)11] [i_2] [(unsigned char)11])) || (((/* implicit */_Bool) (short)-25726)))) ? (min((1633720347), (((/* implicit */int) (signed char)97)))) : (((/* implicit */int) (unsigned char)215))))) ? (((/* implicit */unsigned int) (~((~(-370137238)))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4209574340U)) ? (((/* implicit */int) arr_13 [i_2] [i_2])) : (var_0)))), (max((85392988U), (((/* implicit */unsigned int) arr_15 [14] [i_2] [14] [22]))))))));
    }
    for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        var_24 = ((/* implicit */signed char) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
        arr_22 [i_6] [i_6] = ((/* implicit */unsigned char) ((int) var_6));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)40))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_3)), (var_6)))) : (min(((~(var_9))), (((((/* implicit */_Bool) 463005176)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (85392955U)))))));
        var_26 = ((/* implicit */long long int) max(((unsigned char)223), (((/* implicit */unsigned char) arr_15 [i_6] [i_6] [i_6] [22U]))));
        var_27 = ((/* implicit */int) arr_12 [i_6] [i_6] [i_6] [i_6]);
    }
    var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (((2367940569U) >> (((4611686018427387903LL) - (4611686018427387895LL)))))));
}
