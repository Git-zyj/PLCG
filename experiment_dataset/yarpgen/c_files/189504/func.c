/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189504
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_7))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (signed char)-15)))))))) || (((/* implicit */_Bool) ((int) 174512658856436161ULL)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */signed char) arr_4 [i_0 - 1]);
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)0)), (-7537577758324412364LL)))) & (max((((/* implicit */unsigned long long int) min((1535865957), (((/* implicit */int) arr_6 [i_1] [(signed char)19]))))), (5752824173878840692ULL))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            var_19 &= ((/* implicit */int) ((13408846859119607058ULL) <= (((/* implicit */unsigned long long int) -1479037865))));
                            var_20 = ((unsigned long long int) (unsigned short)0);
                        }
                    }
                } 
            } 
            var_21 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (73990405012500089ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8413412371920533372ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8192))) : (10332861455436047002ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (min((5ULL), (((/* implicit */unsigned long long int) -1007007215)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_8)), ((unsigned char)47)))) <= (((/* implicit */int) var_14)))))));
            arr_15 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)27661), ((unsigned short)19676)))) ? (((/* implicit */int) ((unsigned char) ((long long int) arr_6 [i_0] [i_0])))) : (((/* implicit */int) var_5))));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((arr_5 [i_1]), (((/* implicit */int) var_3)))))));
            var_23 = ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (max((((((/* implicit */_Bool) -155184219)) ? (((/* implicit */long long int) -1513190818)) : (-2240440596292581703LL))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_12)), (arr_9 [i_1] [i_0 - 2])))))));
        }
        var_24 = ((/* implicit */signed char) min((134217472), ((-(-1322740021)))));
        var_25 &= ((/* implicit */unsigned short) (short)-17853);
        var_26 += ((arr_14 [i_0] [i_0] [i_0] [i_0] [2] [i_0] [i_0]) / (max((((4520645112206687029ULL) & (arr_1 [7]))), (((/* implicit */unsigned long long int) 0LL)))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10952583213225233822ULL)) ? (((/* implicit */unsigned long long int) -1862717693)) : (arr_10 [i_5] [10] [i_5] [i_5] [i_5])))) ? (((/* implicit */int) arr_2 [i_5] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) 17387211316453756572ULL)))))));
        var_28 *= arr_4 [i_5];
        /* LoopSeq 3 */
        for (unsigned short i_6 = 2; i_6 < 15; i_6 += 1) 
        {
            arr_23 [(unsigned char)16] [i_6 - 2] &= arr_14 [i_6] [i_6] [8] [i_6] [8] [i_6 - 2] [18LL];
            arr_24 [i_5] [i_5] = ((/* implicit */unsigned long long int) (unsigned short)47185);
            /* LoopNest 2 */
            for (unsigned char i_7 = 1; i_7 < 15; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    {
                        var_29 = arr_27 [i_5];
                        var_30 = ((/* implicit */unsigned char) (-(-7990994222577676520LL)));
                        var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) 963196010)) && (((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) -437940056)) : (arr_20 [i_8] [i_8] [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_5))))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned short) -759632188802348732LL);
        }
        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13948))) * (11890027920407194709ULL)))));
            arr_32 [10LL] [10LL] [i_5] = ((/* implicit */unsigned short) (-(arr_27 [i_5])));
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [(unsigned short)14] [(unsigned short)14] [i_9] [i_9] [8ULL])) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) var_12)))))));
            var_35 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_16 [i_9])) ? (((/* implicit */int) (unsigned short)32256)) : (((/* implicit */int) var_13)))));
        }
        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            arr_37 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((signed char) arr_36 [i_5] [i_5] [i_5]));
            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) var_9))));
        }
    }
}
