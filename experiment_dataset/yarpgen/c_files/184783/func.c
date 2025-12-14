/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184783
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 = ((((((/* implicit */_Bool) (unsigned char)45)) ? (-8316617878569323790LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))))) - (((((/* implicit */_Bool) 33546240U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)15))) : (3867854370071403797LL))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_21 = ((/* implicit */signed char) max((min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-60)) >= (((/* implicit */int) arr_6 [i_0]))))), ((~(var_17))))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204))) : (var_8)))))));
                    var_22 = ((/* implicit */signed char) var_5);
                    arr_9 [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)9974))))) ? (((/* implicit */long long int) ((unsigned int) var_10))) : (min((8316617878569323789LL), (arr_7 [i_0] [i_0] [i_2]))));
                    arr_10 [i_1] [i_1] [i_0] = ((((((/* implicit */_Bool) -1687558955)) ? (2785452125340203489LL) : (-8316617878569323772LL))) ^ (((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)71)))) ? (max((((/* implicit */int) (unsigned short)30720)), (var_10))) : (((/* implicit */int) max(((unsigned char)162), (((/* implicit */unsigned char) arr_6 [i_0])))))))));
                }
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (signed char)-45))))), (min((var_12), (((/* implicit */int) (signed char)119))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)8)), (arr_2 [i_1] [i_1])))) : ((-(((((/* implicit */_Bool) 338162531)) ? (((/* implicit */int) arr_2 [i_1] [(unsigned char)12])) : (((/* implicit */int) var_7))))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 16; i_5 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(var_16)))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (8316617878569323798LL) : (((/* implicit */long long int) -1264113241))))));
                                var_25 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) arr_0 [i_1] [i_4])) ? (((/* implicit */unsigned int) -338162532)) : (var_8))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (signed char)-20))));
                }
            }
        } 
    } 
}
