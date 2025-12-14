/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126678
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_1] [(unsigned char)7] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((17831120773222281260ULL), (897905971234671067ULL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((short) 897905971234671087ULL))), (arr_4 [i_2 - 2] [i_0] [i_1] [i_3])))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 897905971234671050ULL)) ? (-890746004) : (((/* implicit */int) (short)32766))))))));
                        var_16 &= ((/* implicit */int) max(((unsigned char)97), ((unsigned char)8)));
                        var_17 -= ((/* implicit */long long int) arr_6 [i_3] [i_1] [i_1]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    var_18 -= ((/* implicit */signed char) ((unsigned short) ((897905971234671091ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)104))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        arr_20 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) 390367149993228946LL));
                        var_19 = max((4794821943351531739ULL), (4794821943351531743ULL));
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((long long int) 3184082724563549288LL))), (8947558336365445665ULL))))));
    }
    for (signed char i_7 = 2; i_7 < 19; i_7 += 4) 
    {
        arr_23 [i_7] = ((/* implicit */long long int) ((unsigned char) 1978698770));
        arr_24 [i_7] &= ((/* implicit */unsigned char) ((897905971234671070ULL) % (18446744073709551615ULL)));
        var_21 &= ((/* implicit */short) max((((/* implicit */long long int) 4294967283U)), (-1817789806336860011LL)));
    }
    var_22 += ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) | (390367149993228919LL)))) ? (((/* implicit */unsigned long long int) var_5)) : (min((((/* implicit */unsigned long long int) (unsigned char)97)), (16043964038800858894ULL))))));
    var_23 += ((long long int) 72053195991416832LL);
    var_24 = ((/* implicit */unsigned short) var_11);
    var_25 += ((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) -390367149993228955LL))), (((int) var_6))));
}
