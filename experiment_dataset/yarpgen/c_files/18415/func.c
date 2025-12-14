/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18415
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
    var_20 = ((/* implicit */unsigned short) 4294967295U);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_21 &= ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) << (((((int) arr_2 [i_1])) - (3489)))));
            var_22 += ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-22668)) < (((/* implicit */int) (unsigned short)8330)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (1U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22671)))));
            var_23 *= ((/* implicit */unsigned long long int) (short)-22674);
            var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(var_7)))) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)22667))) : (4294967290U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22684)) ? (((/* implicit */unsigned int) var_19)) : (var_14)))) : (((((/* implicit */_Bool) (short)-22669)) ? (arr_0 [i_1]) : (arr_0 [i_0])))))));
        }
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_25 = arr_7 [i_0] [i_2];
            var_26 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)22672))) / (arr_7 [i_0] [i_2]))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 3906188091U)) || (((/* implicit */_Bool) -127401174))))) * (((/* implicit */int) ((var_18) > (((/* implicit */unsigned long long int) var_10))))))))));
        }
        for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)22677))) * (4294967267U))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)1023)) > (977135892))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_11 [i_3 - 1] [i_3])), ((+(((/* implicit */int) (unsigned short)57205))))))) : (((((/* implicit */_Bool) 10270514379135460674ULL)) ? (13188377970720427387ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532)))))));
            var_28 = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)22923))) / (var_2)))))));
            var_29 &= ((/* implicit */unsigned char) ((((((/* implicit */int) (short)9558)) > (((/* implicit */int) (unsigned short)57589)))) ? (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) 828596058)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_3]))) : (var_5))) : (((((/* implicit */_Bool) (short)22682)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3 - 1] [i_3 - 1])) || (((/* implicit */_Bool) var_3))))))));
            var_30 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57193)) ? (arr_4 [i_0] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (short)-22681)))))) && (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (short)-22685)))))))));
        }
        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_9 [i_0] [i_4] [i_4 - 1]), (((/* implicit */unsigned long long int) -9223372036854775791LL)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57218))) / (((((((/* implicit */_Bool) 4294967277U)) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0]))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                    var_33 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) * (max((((((/* implicit */_Bool) -2065608290)) ? (var_5) : (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967290U)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0]))))))))));
                    var_34 &= ((/* implicit */long long int) arr_1 [i_4] [i_5]);
                }
            }
            for (long long int i_7 = 1; i_7 < 22; i_7 += 3) 
            {
                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_4]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_7])), (var_17)))) : (var_10)))) ? (((/* implicit */int) (short)-14529)) : (((/* implicit */int) (unsigned short)17997))));
                var_36 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_8 [i_0] [i_4] [i_4])), (var_6)));
            }
            var_37 = ((/* implicit */short) (-(((((/* implicit */int) arr_5 [i_4 - 1] [i_4])) | (((/* implicit */int) arr_5 [i_4 - 1] [i_4]))))));
            var_38 = ((/* implicit */short) ((((int) (short)14528)) * (((((/* implicit */_Bool) (short)-14541)) ? (((/* implicit */int) (short)32754)) : (((/* implicit */int) (_Bool)1))))));
            var_39 = ((/* implicit */_Bool) (~(((/* implicit */int) max((max((((/* implicit */short) var_15)), (var_12))), (var_12))))));
            var_40 = max((((/* implicit */short) ((((((/* implicit */int) (short)22678)) ^ (((/* implicit */int) arr_5 [i_0] [i_0])))) > (min((var_10), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))))), ((short)-14524));
        }
        var_41 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */int) (short)22686)))))));
    }
    var_42 = ((/* implicit */unsigned char) var_19);
}
