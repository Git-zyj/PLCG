/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185465
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)49172))));
        var_19 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)34880))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_5 [i_0 + 1] [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)28440);
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)102)))) - (366832463))))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                var_20 = ((/* implicit */int) min((var_20), ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28440)))))))));
                arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-114)), ((short)13928)))) ? (((-1) / (((/* implicit */int) (unsigned char)196)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-23307))))))));
            }
            /* vectorizable */
            for (short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                arr_13 [i_0] [(short)2] = ((/* implicit */short) ((13524484921067693262ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 7497186444838175030ULL))))));
                arr_14 [(unsigned short)7] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 16279377828740842697ULL)) ? (1965088634) : (-1141288311)));
                var_21 = ((/* implicit */int) ((unsigned int) 17269214498619441014ULL));
            }
            arr_15 [i_0] = ((/* implicit */unsigned int) ((int) (short)-18254));
            arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) (-(min((16279377828740842672ULL), (16279377828740842650ULL)))));
        }
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            arr_21 [i_0] [i_4] = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) 695859464U)))));
            var_22 = ((/* implicit */int) (+(((unsigned long long int) (signed char)-100))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) (signed char)-47);
            arr_25 [i_0] [11ULL] [i_0] = ((/* implicit */unsigned int) (~(1127201133)));
        }
        var_24 ^= ((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)64)) > (1011770607)))))));
    }
    /* LoopSeq 1 */
    for (short i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_7 = 1; i_7 < 10; i_7 += 2) 
        {
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((int) (unsigned short)0)))));
            var_26 += ((/* implicit */unsigned short) 3592167819089875988ULL);
        }
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            arr_36 [i_6] [i_8] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)1)))))));
            arr_37 [(signed char)5] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)632))) < (14796145366640853229ULL)))), (((((/* implicit */int) (signed char)-54)) + (((/* implicit */int) (unsigned char)0))))));
        }
        arr_38 [i_6] |= -1424848539;
        var_27 = ((/* implicit */long long int) (signed char)26);
        arr_39 [4LL] = ((/* implicit */long long int) 18302628885633695744ULL);
    }
    var_28 = ((/* implicit */unsigned long long int) min(((unsigned short)12774), ((unsigned short)39048)));
}
