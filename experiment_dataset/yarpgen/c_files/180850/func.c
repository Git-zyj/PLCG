/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180850
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
    var_16 = var_5;
    var_17 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */signed char) (_Bool)1))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [8U] |= ((/* implicit */long long int) var_6);
            arr_6 [i_0] = ((/* implicit */signed char) max((13520657344605621582ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        }
        for (unsigned int i_2 = 2; i_2 < 11; i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_0] [6ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-4312)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) != (1850029618326276353ULL))))))) ? ((-((~(var_1))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 1] [i_0])) && (((/* implicit */_Bool) var_2)))))));
            var_19 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 14995412541864076490ULL))));
            arr_10 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_2 + 1])), (min((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-4286)), (var_1)))), (((((/* implicit */_Bool) 520604168611592756ULL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            arr_11 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_6)))));
            arr_12 [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) var_10);
        }
        for (unsigned int i_3 = 2; i_3 < 11; i_3 += 1) /* same iter space */
        {
            var_20 ^= ((/* implicit */int) ((((/* implicit */int) (short)-4310)) != (-32768)));
            arr_15 [i_0] [(unsigned short)9] [i_3] = ((/* implicit */signed char) (+(((unsigned long long int) ((3186334205U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        }
        var_21 = ((/* implicit */unsigned short) var_9);
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [4U] [i_0] [i_0]))));
    }
    /* LoopSeq 3 */
    for (signed char i_4 = 2; i_4 < 13; i_4 += 3) 
    {
        var_22 = ((((/* implicit */_Bool) (~(((var_7) ? (var_8) : (((/* implicit */int) (short)-30145))))))) ? (arr_17 [i_4]) : ((+(16400528668259717588ULL))));
        arr_19 [i_4] [i_4] = ((/* implicit */signed char) var_5);
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            arr_22 [i_5] [i_4] [i_4] = ((/* implicit */int) var_3);
            arr_23 [i_5] [3ULL] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)70)), ((short)-25553)))) ? (((/* implicit */int) (short)4313)) : (((/* implicit */int) var_5))))), (1108633091U)));
            var_23 ^= ((/* implicit */unsigned short) (unsigned char)64);
            var_24 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_6))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_5])))))));
            var_25 = ((/* implicit */unsigned int) var_10);
        }
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_8)) - (var_12)))), (((((/* implicit */_Bool) var_11)) ? (463197595792135245ULL) : (7575965239537060458ULL)))))) ? (12949689705551280042ULL) : (12062424254073798770ULL)))));
            arr_26 [i_4] [i_6] [i_4] = ((/* implicit */short) ((((((/* implicit */int) var_13)) < (((/* implicit */int) var_15)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4285)) << (((/* implicit */int) (_Bool)1))))) < (17945187811734832929ULL)))) : (((((/* implicit */int) ((((/* implicit */_Bool) 288230376151711743ULL)) && (((/* implicit */_Bool) 7473608554475626041ULL))))) % (((((/* implicit */int) var_2)) + (var_9)))))));
            arr_27 [i_4] [(short)2] [i_4] = ((/* implicit */int) ((signed char) ((short) (_Bool)1)));
        }
    }
    for (unsigned short i_7 = 1; i_7 < 16; i_7 += 1) 
    {
        var_27 = ((/* implicit */long long int) var_4);
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((unsigned short) (_Bool)1)))));
        arr_30 [11U] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (max((var_10), (((/* implicit */long long int) (short)4285)))))), (((/* implicit */long long int) var_12))));
        arr_31 [i_7] [i_7 + 1] = ((/* implicit */long long int) max((((14445307671946437027ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_7 + 2]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2929295186U)) || (((/* implicit */_Bool) (short)4283)))))) % (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) -968203734))))))));
        arr_32 [i_7] = ((/* implicit */signed char) var_14);
    }
    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        var_29 += ((/* implicit */unsigned short) (+(1048232332U)));
        arr_36 [i_8] = ((/* implicit */long long int) var_15);
    }
}
