/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108452
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))))) >> (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((var_8) ? (-1) : (((/* implicit */int) var_9))))) : ((((_Bool)0) ? (var_6) : (14084114026692506615ULL)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_18)))))), (((arr_1 [i_0]) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243)))))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3030811113963242908ULL)) ? (var_5) : (((/* implicit */unsigned long long int) 422025341))))) ? (max((291648248152771776ULL), (((/* implicit */unsigned long long int) (unsigned char)13)))) : (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 10956672770348447788ULL)))) : (((((/* implicit */_Bool) ((4294967295ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))) ? (((var_18) & (10956672770348447788ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [9ULL] [i_0 + 2])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [2ULL] [i_0] [i_2] [i_3] [i_4 - 1] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1450737881)) && (((/* implicit */_Bool) arr_5 [8])))) ? (var_3) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_4)) : (16463427160993691383ULL)))))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) 422025341)) : (4633830919633378372ULL)))))));
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) -422025342))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))) : (max((((/* implicit */unsigned long long int) -1450737864)), (9682058511635898019ULL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 422025342)) && (arr_1 [i_0])))) * ((+(((/* implicit */int) arr_1 [i_0]))))));
                                var_24 = max((((unsigned long long int) max((var_16), (7915601134193811094ULL)))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)19168)) <= (((/* implicit */int) (short)30299)))) ? (((/* implicit */int) ((short) var_11))) : (min((((/* implicit */int) (_Bool)0)), (563982149)))))));
                            }
                        } 
                    } 
                }
                arr_21 [i_0] = ((/* implicit */signed char) ((long long int) (short)-1));
                arr_22 [i_1] [i_0] [i_0] = ((/* implicit */int) max((((((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0]) : (var_6))) > (7915601134193811118ULL))), (((((/* implicit */unsigned long long int) arr_17 [i_0 + 1] [9LL] [i_0] [i_1])) < (max((((/* implicit */unsigned long long int) var_9)), (var_5)))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) ((((/* implicit */int) min((var_10), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) arr_29 [i_0] [i_0] [i_7] [i_8] [i_0])))))))) <= ((~(((/* implicit */int) var_0))))));
                                arr_30 [i_9] [i_8] [i_0] [i_1] [i_0] = ((((((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0 - 1] [i_0 - 1] [i_0] [i_8] [i_9] [i_9]))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_26 [i_0 + 2] [i_1] [i_0] [i_8] [i_9] [i_9])))))) > (((/* implicit */unsigned long long int) ((long long int) max((11077481797130631696ULL), (((/* implicit */unsigned long long int) -318822529)))))));
                                arr_31 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0] = (~(min((arr_11 [i_7] [i_0]), (min((var_6), (((/* implicit */unsigned long long int) (short)-10184)))))));
                                arr_32 [i_0] [i_1] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) (-(min(((+(var_2))), (((/* implicit */long long int) 422025318))))));
                                arr_33 [6] [(_Bool)1] [(_Bool)1] [i_8] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_16) & (2022842197326486420ULL)))) ? (((1074692417U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [8U] [i_0] [5LL] [i_0 - 1] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_26 [i_9] [i_8] [i_0] [i_0] [i_0 + 2] [i_0])))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) + (1450737881)))) ? (min((9002905162661829524LL), (var_15))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (137438953471LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))))));
                }
                for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    var_27 = ((/* implicit */_Bool) ((short) ((_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])));
                    var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 0ULL)))) : ((((_Bool)1) ? (arr_7 [i_0]) : (arr_7 [i_0]))));
                }
                for (int i_11 = 3; i_11 < 9; i_11 += 3) 
                {
                    arr_38 [i_0] = ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 7655450810549104247ULL)))) : (var_5));
                    var_29 = ((/* implicit */_Bool) 10531142939515740505ULL);
                }
                for (unsigned short i_12 = 1; i_12 < 6; i_12 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_13 = 1; i_13 < 8; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 2; i_14 < 8; i_14 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) (+(-1721001532824049495LL)))), (((((/* implicit */_Bool) var_10)) ? (arr_18 [i_0] [7] [(_Bool)1] [i_0 + 2] [i_0 + 2]) : (var_12))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1162246442)) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))))));
                                var_31 = ((/* implicit */unsigned short) var_18);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-30428))));
                    var_33 = ((/* implicit */signed char) min(((~(arr_10 [(_Bool)1] [i_12 + 1] [i_0] [i_12] [(short)4] [i_12]))), (((((/* implicit */_Bool) arr_10 [i_1] [i_12 + 2] [i_0] [i_12 + 3] [(unsigned char)5] [i_12 + 2])) ? (arr_10 [i_0] [i_12 + 2] [i_0] [i_12 - 1] [i_12] [i_12]) : (2305843009213693951ULL)))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 1; i_15 < 8; i_15 += 3) 
                {
                    for (int i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_49 [i_0 + 1] [i_0] [i_0 + 1] [2ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_49 [i_0] [i_0] [i_0] [i_0])) > (3934905435120074447LL))))) : (((((/* implicit */_Bool) 14084114026692506615ULL)) ? (((/* implicit */unsigned long long int) 1450737885)) : (7655450810549104248ULL)))));
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_42 [i_0 + 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-6949)) : (90500342))))))) > (((((/* implicit */_Bool) min((((/* implicit */short) var_11)), ((short)30299)))) ? (((unsigned long long int) 4503599627370495ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_39 [i_0] [i_0] [i_0] [i_0])), ((unsigned char)20)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
