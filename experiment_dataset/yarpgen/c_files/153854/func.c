/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153854
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
    var_11 = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 3] [i_0] [i_0 - 2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4723090113292557257LL)) ? (((/* implicit */int) ((_Bool) 13152599250906948113ULL))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)49)), (var_5))))))), (960LL)));
                var_12 += ((/* implicit */unsigned short) (-(var_0)));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) min((((arr_9 [i_3] [i_3] [i_0] [i_3 + 2]) ^ (((/* implicit */int) (unsigned short)16382)))), (((/* implicit */int) var_5))));
                            var_13 += (-(5294144822802603480ULL));
                            var_14 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) var_7)) ? (2016ULL) : (((/* implicit */unsigned long long int) var_0)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (unsigned short)797)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        {
                            var_15 &= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38211))))) < (arr_9 [i_0] [i_1] [i_5] [i_5])));
                            arr_20 [i_0] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)4)) ? (2899613451863744055ULL) : (((/* implicit */unsigned long long int) 8U)))) + (((/* implicit */unsigned long long int) (+(arr_6 [i_0 - 2] [i_1] [i_5]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_6 = 2; i_6 < 9; i_6 += 2) 
                {
                    var_16 &= ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0 - 1]);
                    arr_23 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_1] [6LL]);
                }
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_9 [i_0 + 2] [i_0 + 1] [i_1] [i_0 + 3])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)166)), (4241872760U)))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            {
                                arr_33 [i_0] [i_0] [i_0] [(unsigned short)1] [i_8] [i_9] = ((/* implicit */long long int) 18446744073709549606ULL);
                                var_18 += ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) arr_19 [i_0 + 2] [i_0 + 3] [i_0 + 1] [i_0 - 2])))));
                                arr_34 [i_0] [i_8] [i_7] [3] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)81))))) ? (arr_9 [i_0] [i_1] [i_0] [i_1]) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)3))) >= (9223372036854775807LL))))))));
                                arr_35 [i_0] [i_1] [i_0] = ((/* implicit */int) min((4294967287U), (((/* implicit */unsigned int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_36 [i_0] [i_0] [i_0] [7U] = min((27), (((/* implicit */int) (short)3)));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0 + 1] [i_0] [i_0] [i_1])) ? (var_10) : (((/* implicit */unsigned long long int) arr_6 [i_0 + 2] [i_0 - 2] [i_0 - 1]))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) * (((((/* implicit */_Bool) 0ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))))))) : (((((/* implicit */unsigned long long int) ((308892925U) << (((((/* implicit */int) var_7)) + (59)))))) + (var_3)))))));
                    arr_37 [i_7] [i_0] [i_7] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)48)) : (262143)));
                }
            }
        } 
    } 
}
