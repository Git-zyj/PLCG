/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134916
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
    for (short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) min((var_8), (((/* implicit */int) (_Bool)1))))) : (arr_2 [5U] [i_1])))) || (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))) > (arr_2 [i_0] [i_1])))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 7; i_2 += 4) 
                {
                    var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)5227)) ? (min((((/* implicit */int) min((((/* implicit */unsigned short) (short)-20379)), ((unsigned short)9463)))), (((((/* implicit */int) (_Bool)1)) / (627042103))))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_0 [i_1] [3]))))));
                    var_17 = ((/* implicit */unsigned short) var_7);
                    var_18 = ((/* implicit */short) (_Bool)1);
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) max((var_2), (min(((unsigned short)9463), (((/* implicit */unsigned short) (short)-20379))))))) || (var_13))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = (+(14));
                        var_21 |= ((/* implicit */unsigned short) var_14);
                    }
                    for (short i_4 = 2; i_4 < 8; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */int) max((var_22), (arr_4 [i_0] [i_1] [i_4])));
                        var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 532575944704LL)) ? (1843152039) : (arr_4 [i_4] [i_2 + 3] [i_0])))) ? (((9222246136947933184LL) & (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) arr_2 [i_0] [i_0])))), (((/* implicit */long long int) (short)3))));
                        var_24 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((((/* implicit */_Bool) 6366295746287563403ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_9))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (2739523705U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))))), (min((arr_4 [i_4 - 1] [i_1] [i_1]), (arr_4 [i_0] [i_1] [i_4 + 2])))));
                        var_25 += ((/* implicit */short) var_2);
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(((/* implicit */int) (short)12243)))) / (-569469214)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_14)) : (((arr_11 [i_0] [i_0] [i_2 + 1] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (2739523705U)))))) : ((-(min((-6869784990539842354LL), (((/* implicit */long long int) -1713264509))))))));
                    }
                }
                for (unsigned int i_5 = 1; i_5 < 6; i_5 += 4) 
                {
                    var_27 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (929912613) : (var_12)))) ? (var_8) : (((arr_3 [i_0] [i_1]) & (((/* implicit */int) var_13))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_28 &= ((/* implicit */int) var_2);
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0] [i_1]) >= (((/* implicit */unsigned int) arr_5 [i_0 - 1] [i_1] [i_5])))))) == (((((/* implicit */_Bool) 9U)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-4988579802759999961LL)))));
                        var_30 = var_0;
                        var_31 = ((/* implicit */unsigned int) var_2);
                    }
                    for (unsigned short i_7 = 3; i_7 < 8; i_7 += 3) 
                    {
                        var_32 = ((/* implicit */short) (-(((((/* implicit */_Bool) min((-532575944687LL), (((/* implicit */long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) (unsigned short)60309)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1] [i_5] [i_7 - 1]))))) : (((((/* implicit */_Bool) -7446070516298289460LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (17025245123086373323ULL)))))));
                        var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                    }
                    var_34 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_10 [i_0 - 2] [i_0] [6U] [i_5])))) / (max((((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_5] [i_5])), (arr_4 [i_0] [i_1] [i_5]))))) * ((-(((((/* implicit */_Bool) (short)-20379)) ? (arr_4 [i_0] [i_1] [i_5 + 2]) : (var_4)))))));
                }
                for (short i_8 = 1; i_8 < 8; i_8 += 2) 
                {
                    var_35 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 4294967287U)) ? (arr_14 [i_8] [i_8 + 1] [(unsigned short)6] [i_8]) : (arr_14 [i_8] [i_8 + 1] [i_8 + 1] [(unsigned short)9])))));
                    var_36 = -4988579802759999960LL;
                }
                var_37 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)128)), (2739523704U)));
                var_38 = ((/* implicit */int) arr_8 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0 - 2]);
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    for (unsigned int i_10 = 1; i_10 < 6; i_10 += 1) 
                    {
                        {
                            var_39 = max((((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 798506345931747503LL)))) ? (((((/* implicit */_Bool) var_6)) ? (3385309427U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19235))))) : (((/* implicit */unsigned int) arr_17 [i_0] [i_1] [i_9] [i_10 + 2])))), (((/* implicit */unsigned int) ((int) arr_16 [i_9]))));
                            var_40 = ((/* implicit */unsigned short) ((((arr_14 [i_9] [i_0 - 1] [i_10 + 3] [i_10 + 1]) + (((/* implicit */long long int) max((arr_13 [1U] [i_1] [i_1]), (var_12)))))) & (((/* implicit */long long int) ((((16110979281485027421ULL) != (((/* implicit */unsigned long long int) -4988579802759999960LL)))) ? (((/* implicit */int) min((var_11), (var_11)))) : (min((-148705248), (((/* implicit */int) arr_7 [i_10] [i_0] [i_1] [i_0])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_41 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 9U)) && (((/* implicit */_Bool) var_8))))))) ^ (((((((/* implicit */_Bool) var_1)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >> (min((((/* implicit */int) var_5)), (662815236)))))));
    var_42 = ((/* implicit */short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */int) var_3))))) / (var_9))) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 329387483436135480LL)) ? (-798506345931747504LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-10857)))))) ? (((/* implicit */int) (short)-23612)) : (((/* implicit */int) (_Bool)1)))))));
}
